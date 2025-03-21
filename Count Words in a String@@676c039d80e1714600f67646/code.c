#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int ctr=1;
    int len=strlen(str);
    if(len<2){
        printf("0");
        return 0;
    }
    for(int i=1; i< len;i++){
        if(str[i]==' ' && str[i+1]!=' '){
            ctr++;
        }
    }
    printf("%d", ctr);
}