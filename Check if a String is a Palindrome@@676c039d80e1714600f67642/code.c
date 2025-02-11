#include <stdio.h>
#include<string.h>

int main() {
    int len,i,j;
    char str[100];
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        char ch,rev;
        ch=str[i];
        rev=str[len];
        if(ch=rev){
            j++;
        }
        else{
            printf("No");
            return 0;
        }
    }
    if(j>0){
        printf("Yes");
    }
    return 0;
}