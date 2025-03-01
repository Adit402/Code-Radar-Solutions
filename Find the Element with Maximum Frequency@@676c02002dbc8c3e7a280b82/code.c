#include <stdio.h>
#include <stdlib.h>  // For qsort

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findMaxFrequency(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare); // Sort array

    int maxFreq = 1, currentFreq = 1, maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentFreq++;
        } else {
            currentFreq = 1;
        }

        if (currentFreq > maxFreq) {
            maxFreq = currentFreq;
            maxElement = arr[i];
        }
    }

    printf("%d", maxElement);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxFrequency(arr, n);

    return 0;
}
