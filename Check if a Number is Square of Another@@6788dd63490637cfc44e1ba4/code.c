#include <stdio.h>
#include<math.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(pow(b,2)==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}