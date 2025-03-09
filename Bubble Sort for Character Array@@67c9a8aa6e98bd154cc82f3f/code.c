int bubbleSort(int a, int n){
    int i;
    char temp;
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%c ", a[i]);
    }
}