// #include <stdio.h>

void bubbleSort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}