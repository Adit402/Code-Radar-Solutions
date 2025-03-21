#include<stdio.h>
int main(){
    char str[100];
    scanf("%s", str[100]);
    int ctr=0;
    for(int i=0; i!='\0';i++){
        if(str[i]==" "){
            ctr++;
        }
    }
    printf("%d", ctr);
}