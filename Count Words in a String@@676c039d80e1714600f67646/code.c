#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
     fgets(str,sizeof(str),stdin);
    int ctr=1;
    for(int i=0; i!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' '){
            ctr++;
        }
    }
    printf("%d", ctr);
}