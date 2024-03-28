#include<stdio.h>
#include<string.h>

int main(){
  char alpha,beta,non_terminal;
  int num,index=3;
  char product[10][10];
  printf("Enter no of production rules: ");
  scanf("%d",&num);
  printf("Enter the productions:\n");
  for(int i=0;i<num;i++){
    scanf("%s",product[i]);
  }
  for(int i=0;i<num;i++){
    printf("Grammar::: %s",product[i]);
    non_terminal=product[i][0];
    if(non_terminal==product[i][index]){
      printf(" is recursive\n");
      alpha=product[i][index+1];
      while(product[i][index]!=0&&product[i][index]!='|'){
        index++;
      }
      if(product[i][index!=0]){
        beta=product[i][index+1];
        printf("The grammar without recursion is:\n");
        printf("%c->%c%c\'",non_terminal,beta,non_terminal);
        printf("\n%c\'->%c%c\'|E\n",non_terminal,alpha,non_terminal);
      }
      else{
        printf("It cannot be reduced\n");
      }
    }
    else{
      printf(" is not left recursive\n");
    }
    index=3;
  }
}