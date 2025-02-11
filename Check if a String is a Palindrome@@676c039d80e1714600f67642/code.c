#include <stdio.h>
#include<string.h>

int main() {
    int len,i,j=0;
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    len=strlen(str);
    
    for(i=0;i<len/2;i++){
        if(str[i]==str[len-1-i]){
            j++;
        }
        else{
            printf("No");
            return 0;
        }
    }
    if(j>len/2){
        printf("Yes");
    }
    return 0;
}