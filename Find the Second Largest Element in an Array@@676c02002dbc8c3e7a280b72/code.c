#include <stdio.h>
#include <limits.h>  

int main() {
    int n, i;
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int highest = INT_MIN, second_highest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (a[i] > highest) {
            second_highest = highest;
            highest = a[i];
        } else if (a[i] > second_highest && a[i] != highest) {
            second_highest = a[i];
        }
    }

    if (second_highest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second_highest);
    }

    return 0;
}
