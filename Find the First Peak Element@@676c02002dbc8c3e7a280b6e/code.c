#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    // Check for invalid or zero-length arrays
    if (n <= 0) {
        printf("-1\n"); 
        return 0;
    }

    int a[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Handle case for array with a single element
    if (n == 1) {
        printf("%d\n", a[0]);
        return 0;
    }

    // Check if the first element is a peak
    if (a[0] >= a[1]) {
        printf("%d\n", a[0]);
        return 0;
    }

    // Check if the last element is a peak
    if (a[n - 1] >= a[n - 2]) {
        printf("%d\n", a[n - 1]);
        return 0;
    }

    // Check for the first peak in the middle elements
    for (i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            printf("%d\n", a[i]);
            return 0;
        }
    }

    // If no peak is found
    printf("-1\n");

    return 0;
}
