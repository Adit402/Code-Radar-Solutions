#include <stdio.h>

#define MAX 10000 // Adjust based on the expected range of input values

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], hash[MAX] = {0}; // Hash table to store counts

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        hash[a[i]]++; // Count occurrences
    }

    int found = 0;
    for (i = 0; i < MAX; i++) {
        if (hash[i] > 1) {
            printf("%d " hash[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicates found.\n");
    }

    return 0;
}
