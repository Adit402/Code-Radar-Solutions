int kthSmallest(int a[],int n, int num){
    int i,j,sum,temp;
    if(num>n){
        return -1;
        return 0;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    sum=a[num-1];
    return sum;
}