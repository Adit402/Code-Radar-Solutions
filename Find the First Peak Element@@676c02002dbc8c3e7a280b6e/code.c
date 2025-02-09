#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Check if the first element is a peak
    if (n == 1 || arr[0] >= arr[1]) {
        return arr[0];
    }
    
    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];
    }

    // Check for the first peak element in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }

    return -1; // This should never be reached, as there's always a peak in the array.
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peak = findFirstPeak(arr, n);
    
    if (peak != -1) {
        printf("The first peak element is: %d\n", peak);
    } else {
        printf("No peak element found.\n");
    }
    
    return 0;
}
