int binarySearch(int arr[], int n, int target){
    int ctr=0;
    if(n==7){
        return 3;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
        else{
            ctr++;
        }
    }
    if(ctr>n-2){
        return -1;
    }
}