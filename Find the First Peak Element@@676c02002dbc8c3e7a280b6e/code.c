#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i, n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n"); // Handling invalid input.
        return 0;
    }

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Case 1: Check if the first element is a peak
    if (n == 1 || a[0] >= a[1]) {
        printf("%d\n", a[0]);
        return 0;
    }

    // Case 2: Check if the last element is a peak
    if (a[n - 1] >= a[n - 2]) {
        printf("%d\n", a[n - 1]);
        return 0;
    }

    // Case 3: Check for the first peak in the middle elements
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
