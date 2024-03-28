// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char input[50];
    printf("Enter the number:");
    scanf("%s",input);
    if(strchr(input,'.')!=NULL){
        printf("float");
    }
    else{
        printf("int");
    }
}