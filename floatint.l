%{
  #include<stdio.h>
%}

%%
[0-9]+.[0-9]+ {printf("Float\n");}
[0-9]+ {printf("int\n");}
.+ {printf("not a valid float or int\n");}
\n return 0;
%%

int yywrap(){
  return 1;
}

int main(){
  printf("Enter the number: ");
  yylex();
  return 0;
}