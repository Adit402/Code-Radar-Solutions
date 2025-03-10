#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Error: Need at least two numbers\n");
        return 1;
    }

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort (Fixed Index Issue)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {  // Fix: Correct loop range
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Compute the maximum product of two numbers
    int max_product = a[n-1] * a[n-2];  // Max two numbers
    int alt_product = a[0] * a[1];      // Min two numbers (could be negative * negative)

    printf("%d", (max_product > alt_product) ? max_product : alt_product);

    return 0;
}
