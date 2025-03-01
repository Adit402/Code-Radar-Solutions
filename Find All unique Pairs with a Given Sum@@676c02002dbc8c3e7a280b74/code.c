#include <stdio.h>

int main() {
    int i, n, j;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &j);

    for (i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) { 
            if (a[i] + a[k] == j) {
                printf("%d %d\n", a[i], a[k]);
            }
        }
    }

    return 0;
}
