#include <stdio.h>

int main() {
    int i, n, j = 0, temp;
    scanf("%d", &n);
    
    int a[n];  
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            j++;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    return 0;
}
