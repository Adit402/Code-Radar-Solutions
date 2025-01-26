#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d", &a);
    b=a/10;
    if(a<=100 && a>=90){
        printf("A");
    }
    else if(a<90 && a>=80){
        printf("B");
    }
    else if(a<80 && a>=70){
        printf("C");
    }
    else if(a<70 && a>=60){
        printf("D");
    }
    else{
        printf("F")
    }
    return 0;
}