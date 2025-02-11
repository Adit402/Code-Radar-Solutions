#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num = 5;  
    
    int result = flipBits(num);
    printf("%d", result);
    
    return 0;
}
