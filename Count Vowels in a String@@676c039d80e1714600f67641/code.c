#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int vow=0;
    for(int i=0;str[i]<'\0';i++){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
            vow++;
        }
        else{
            continue;
        }
    }
    printf("%d",vow);
    return 0;
}