#include <stdio.h>

int setNthBit(int num, int n) {
    // Create a mask where only the nth bit is 1
    int mask = 1 << n;
    
    num = num | mask;
    
    return num;
}

int main() {
    int num;  
    int n;    
    scanf("%d %d",&num,&n);
    int result = setNthBit(num, n);
    printf("%d",  result);
    
    return 0;
}
