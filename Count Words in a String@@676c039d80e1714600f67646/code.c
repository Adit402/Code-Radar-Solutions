#include<stdio.h>
int main(){
    char str[100];
     fgets(str,sizeof(str),stdin);
    int ctr=0;
    for(int i=0; i!='\0';i++){
        if(str[i]==' '){
            ctr++;
        }
    }
    printf("%d", ctr);
}