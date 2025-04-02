#include <stdio.h>

int main() {
    int i, n, j = 0, temp;
    scanf("%d", &n);
    
    int a[n];  // Declare the array
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Input array elements
    }

    // Move non-zero elements to the front
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            j++;  // Only increment when a non-zero element is found
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Print the modified array
    }

    return 0;
}
