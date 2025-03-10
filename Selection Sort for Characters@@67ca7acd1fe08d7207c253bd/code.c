void selectionSort(int arr[], int n) {
    int i, j, minIdx;
    char temp;
    
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}
void printArray(char arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%c ", arr[i]);
    }
}
