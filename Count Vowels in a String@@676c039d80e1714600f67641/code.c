#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int vow=0;
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vow++;
        }
        else{
            continue;
        }
    }
    printf("%d",vow);
    return 0;
}