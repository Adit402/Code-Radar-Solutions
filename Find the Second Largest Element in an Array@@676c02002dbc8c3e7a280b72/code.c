#include <stdio.h>

int main() {
    int n, i, temp;
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
    int highest = -1, second_highest = -1;

    // Traverse the array to find the highest and second highest values
    for (i = 0; i < n; i++) {
        if (a[i] > highest) {
            second_highest = highest;
            highest = a[i];
        } else if (a[i] > second_highest && a[i] != highest) {
            second_highest = a[i];
        }
    }

    // If second_highest is still -1, there is no valid second highest
    if (second_highest == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", second_highest);
    }

    return 0;
}
