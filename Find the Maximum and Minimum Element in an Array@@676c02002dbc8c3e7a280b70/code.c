#include <stdio.h>

int main() {
    int n, i, min, max;
    scanf("%d", &n);

    int a[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    min = a[0];
    max = a[0];
    
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    
    printf("%d ", min);
    printf("%d", max);
    
    return 0;
}
