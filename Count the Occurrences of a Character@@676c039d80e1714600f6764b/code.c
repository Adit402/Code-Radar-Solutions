#include<stdio.h>
int main(){
    char str[100],n;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&n);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==n){
            count++;
        }
    }
    printf("%d",count);
}