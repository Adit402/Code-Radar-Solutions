char bubbleSort(char arr[n], int n){
    int i;
    char temp;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}