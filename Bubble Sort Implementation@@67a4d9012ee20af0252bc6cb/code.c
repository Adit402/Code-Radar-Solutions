#include <stdio.h>

void bubbleSort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}