%{
#include<stdio.h> 
%}

%%
[a-zA-Z_][a-zA-Z0-9_]* {printf("valid identifier\n");}
.+ {printf("not valid\n");}
\n return 0;
%%

int yywrap(){
  return 1;
}

int main(){
  printf("Enter identifier: ");
  yylex();
  return 0;
}