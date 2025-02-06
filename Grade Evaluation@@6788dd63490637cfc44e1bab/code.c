#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c=='A'){
        printf("Excellent");
    }
    else if(c=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(c=='D'){
        printf("Below Average");
    }
    else if(c=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}