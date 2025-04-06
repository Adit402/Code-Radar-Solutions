#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findSmallestMissingPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Place arr[i] at its correct position if possible
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Now find the first place where index+1 != value
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }

    // If all positions are correct, the missing number is n+1
    return n + 1;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSmallestMissingPositive(arr, n);
    printf("Smallest missing positive integer: %d\n", result);

    return 0;
}
