#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num = 5;  
    
    int result = flipBits(num);
    printf("Original number: %d\n", num);
    printf("After flipping the bits: %d\n", result);
    
    return 0;
}
