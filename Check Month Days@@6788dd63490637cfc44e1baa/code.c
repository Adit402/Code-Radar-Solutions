#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
        case 4:
        case 6:
        case 9:
        printf("30");
        break;
        case 2:
        printf("28");
        break;
        default:
        printf("Invalid");
    }
    return 0;
}