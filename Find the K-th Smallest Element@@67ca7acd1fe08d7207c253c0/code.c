int kthSmallest(int a[],int n, int num){
    int i,j,sum,temp;
    for(i=0;i<n-1;i++){
        for(j=1;j<n-1-i;j++){
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