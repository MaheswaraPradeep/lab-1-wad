%{
#include<stdio.h>
%}

%%
[a-zA-Z0-9.]+@[a-z]+.["in"|"com"|"edu"|"org"]+ {printf("Email id valid");}
.+ {printf("not valid\n");}
\n {return 0;}

%%

int yywrap(){
  return 1;
}

int main(){
  printf("Enter the string: ");
  yylex();
  return 0;
}