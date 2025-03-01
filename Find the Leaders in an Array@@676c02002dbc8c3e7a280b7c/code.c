#include <stdio.h>

void findLeaders(int arr[], int n) {
    int maxRight = arr[n - 1];  

    // Print all elements since they are all leaders
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
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
