#include <stdio.h>

int main(){
    int w=0,s=0,l=0,c=0;
    char str[100];
    printf("WEnter the sentences:\n");
    scanf("%[^~]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            w++;
            s++;
        }
        else if(str[i]=='\n'){
            l++;
            w++;
        }
        else{
            c++;
        }
    }
    w++;
    printf("words are:%d\n",w);
    printf("lines are:%d\n",l);
    printf("spaces are:%d\n",s);
    printf("characters are:%d\n",c);

}