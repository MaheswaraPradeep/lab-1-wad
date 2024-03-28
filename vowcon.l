%{
  #include<stdio.h>
  int vow_count=0;
  int con_count=0;
%}

%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {con_count++;}
\n return 0;
%%

int yywrap(){
  return 1;
}

int main(){
  printf("Enter the string: ");
  yylex();
  printf("No of vowels are: %d\n",vow_count);
  printf("no of consosnants are: %d\n",con_count);
  return 0;
}