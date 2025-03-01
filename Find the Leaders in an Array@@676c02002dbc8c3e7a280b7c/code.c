#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n], count = 0;
    int maxRight = arr[n - 1];  // Rightmost element is always a leader
    leaders[count++] = maxRight; // Store it

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) { 
            maxRight = arr[i]; // Update maxRight
            leaders[count++] = arr[i]; // Store the leader
        }
    }

    // Print leaders in correct order (left to right)
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);
    
    return 0;
}
