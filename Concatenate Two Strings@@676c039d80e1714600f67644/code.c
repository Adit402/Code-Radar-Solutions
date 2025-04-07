#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char name[100];
    fgets(str,sizeof(name),stdin);
    strcat(str,name);
    printf("%s", str);
}