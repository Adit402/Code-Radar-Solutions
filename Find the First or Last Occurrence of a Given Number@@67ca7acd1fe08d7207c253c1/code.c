int findOccurrence(int arr[], int n, int target, char mode){
    int ctr=0;
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
            else{
                ctr++;
            }
        }
    }
    if(ctr>n-2){
        return -1;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]==target){
                return i;
            }
        }
    }
}