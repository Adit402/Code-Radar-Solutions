void selectionSort(int arr[], int n){
    int i,temp;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}    

void printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
