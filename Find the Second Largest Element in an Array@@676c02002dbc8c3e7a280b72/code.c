#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int n, i;
    scanf("%d", &n);

    // Handle edge case for empty or single element arrays
    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize variables to track the highest and second highest values
    int highest = INT_MIN, second_highest = INT_MIN;

    // Traverse the array to find the highest and second highest values
    for (i = 0; i < n; i++) {
        if (a[i] > highest) {
            second_highest = highest;
            highest = a[i];
        } else if (a[i] > second_highest && a[i] != highest) {
            second_highest = a[i];
        }
    }

    // If second_highest is still INT_MIN, there is no valid second highest
    if (second_highest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second_highest);
    }

    return 0;
}
