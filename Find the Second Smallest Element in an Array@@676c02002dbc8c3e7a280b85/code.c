#include <stdio.h>

int main() {
    int n, i, temp;
    
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int allSame = 1;
    for (i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            allSame = 0;
            break;
        }
    }

    if (allSame) {
        printf("-1");
        return 0;
    }

    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int first = a[0];
    int secondSmallest = -1;
    
    for (i = 1; i < n; i++) {
        if (a[i] != first) {
            secondSmallest = a[i];
            break;
        }
    }

    printf("%d", secondSmallest);
    return 0;
}
