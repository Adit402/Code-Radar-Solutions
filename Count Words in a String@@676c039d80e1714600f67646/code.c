#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int ctr=1;
    int len=strlen(str);
    for(int i=1; i< len;i++){
        if(str[i]==' ' && str[i+1]!=' '){
            ctr++;
        }
    }
    printf("%d", ctr);
}