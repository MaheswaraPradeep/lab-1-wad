%{
  #include<stdio.h>
  int word=0;
  int space=0;
  int letter=0;
%}

%%
([a-zA-Z])+ {word++; letter+=yyleng;}
([ ])+ {space++;}
.;
\n return 0;
%%

int yywrap(){
  return 1;
}

int main(){
  printf("Enter the senetence: ");
  yylex();
  printf("no of words are: %d\n",word);
  printf("no of letter are: %d\n",letter);
  printf("no of spaces are: %d\n",space);
  return 0;
}