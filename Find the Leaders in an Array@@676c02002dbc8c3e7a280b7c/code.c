#include <stdio.h>

void findLeaders(int arr[], int n) {
    int maxRight = arr[n - 1]; // Rightmost element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) { 
            maxRight = arr[i];  // Update maxRight
            printf("%d ", arr[i]); // Print the leader
        }
    }
    printf("%d ", maxRight);
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
