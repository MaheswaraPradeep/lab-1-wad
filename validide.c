#include <stdio.h>
#include<string.h>
#include<stdbool.h>

bool isvalid(char* str,int n){
  if(!((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||str[0]=='_')){
    return false;
  }
  for(int i=0;i<n;i++){
    if(!((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||(str[0]>='1'&&str[0]<='9')||str[0]=='_')){
      return false;
  }
  }
  return true;
}

int main() {
    char input[50];
    printf("Enter the input;");
    scanf("%s",input);
    int n=strlen(input);
    if(isvalid(input,n)){
        printf("valid");
    }
    else{
      printf("Invalid");
    }
}