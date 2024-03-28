#include<stdio.h>
#include<string.h>
int main(){
  char key[32][20]={
     "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"

  };
  char input[50];
  scanf("%s",input);
  int n=strlen(input);
  int flag=0;
  if(input[n-1]=='\n'){
    input[--n]='\0';
  }
  for(int i=0;i<32;i++){
    if(strcmp(input,key[i])==0){
      flag=1;
    }
  }
  if(flag==1){
    printf("keyword");
  }
  else{
    printf("invalid");
  }
}