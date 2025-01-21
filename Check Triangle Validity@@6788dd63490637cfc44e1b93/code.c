#include <stdio.h>
#include<math.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c,num,n;
    scanf("%d %d %d", &a,&b,&c);
    num= pow(a,2) + pow(b,2);
    n=pow(c,2);
    if(num==n){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}