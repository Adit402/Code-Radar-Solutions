#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    gets(str);
    int vow=0;
    for(int i=0;i<"\0";i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            vow++;
        }
        else{
            continue;
        }
    }
    printf("%d",vow);
    return 0;
}