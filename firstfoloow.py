def compute_first(grammar):
  first = {}
  for non_terminal in grammar:
    first[non_terminal] = set()
  for non_terminal in grammar:
    compute_first_util(grammar, non_terminal, first)
  return first

def compute_first_util(grammar, non_terminal, first):
  if non_terminal in first:
    return
  for production in grammar[non_terminal]:
    if production[0].islower() or production[0] == '#':
      first[non_terminal].add(production[0])
    else:
      compute_first_util(grammar, production[0], first)

def compute_follow(grammar, start_symbol):
  follow = {}
  for non_terminal in grammar:
    follow[non_terminal] = set()
  follow[start_symbol].add('$')
  for non_terminal in grammar:
    compute_follow_util(grammar, non_terminal, follow)
  return follow

def compute_follow_util(grammar, non_terminal, follow):
  for production in grammar:
    for i in range(len(grammar[production])):
      if non_terminal in grammar[production][i]:
        if i == len(grammar[production]) - 1:
          if production != non_terminal:
            compute_follow_util(grammar, production, follow)
          follow[non_terminal] |= follow[production]
        else:
          first_of_next = compute_first_of_next(grammar[production][i+1])
          follow[non_terminal] |= first_of_next
          if '#' in first_of_next:
            follow[non_terminal] |= follow[production]

def compute_first_of_next(production):
  first_of_next = set()
  if production[0].islower() or production[0] == '#':
    first_of_next.add(production[0])
  else:
    first_of_next |= first[production[0]]
  return first_of_next

# Example grammar
grammar = {
  'S': ['AB', 'BC'],
  'A': ['aA', '#'],
  'B': ['bB', 'c'],
  'C': ['cC', 'd']
}

start_symbol = 'S'

first = compute_first(grammar)
follow = compute_follow(grammar, start_symbol)

print("First sets:")
for non_terminal in first:
  print(non_terminal, ":", first[non_terminal])

print("\nFollow sets:")
for non_terminal in follow:
  print(non_terminal, ":", follow[non_terminal])