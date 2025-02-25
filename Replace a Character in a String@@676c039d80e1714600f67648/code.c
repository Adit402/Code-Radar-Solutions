#include<stdio.h>
#include<string.h>
int main(){
    char str[100],a,s,ch,ss;
    fgets(str, sizeof(str), stdin);
    scanf("%c %c", &a,&s);
    int i,num;
    num=strlen(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==a){
            str[i]=s;
        }
    }
    printf("%s", str);
} 