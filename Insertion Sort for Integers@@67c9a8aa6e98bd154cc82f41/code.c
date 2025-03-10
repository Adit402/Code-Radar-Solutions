void insertionSort(int arr[], int n){
    int i,j;
    int temp;
    for (i = 1; i < n; i++) {  // Start from the second element
        temp = arr[i];  
        j = i - 1;

        // Shift elements that are greater than temp
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;  // Insert temp at the correct position
    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
