#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num;  
    scanf("%d",&num);
    int result = flipBits(num);
    printf("%d", result);
    
    return 0;
}
