#include<stdio.h>
#include<string.h>
int main(){
  char gram[20],part1[20],part2[20],new[20],modified[20];
  int i,j=0,k=0,pos;
  printf("Enter the production:A->");
  scanf("%s",gram[20]);
  for(i=0;gram[i]!='!';i++,j++){
    part1[j]=gram[i];
  }
  part1[j]='\0';
  for(j=++i,i=0;gram[j]!='\0';i++,j++){
    part2[i]=gram[j];
  }
  part2[i]='\0';
  for(i=0;i<strlen(part1)||i<strlen(part2);i++){
    if(part1[i]==part2[i]){
      modified[k]=part1[i];
      k++;
      pos=i+1;
    }
  }
  for(i=pos,j=0;part1[i]!='\0';i++,j++){
    new[j]=part1[i];
  }
  new[j++]='|';
  for(i=pos;part2[i]!='\0';i++,j++){
    new[j]=part2[i];
  }
  modified[k]='X';
  modified[++k]='\0';
  new[j]='\0';
  printf("Grammar without left factoring is: \n");
  printf("A->%s",modified);
  printf("\nX->%s\n",new);
}