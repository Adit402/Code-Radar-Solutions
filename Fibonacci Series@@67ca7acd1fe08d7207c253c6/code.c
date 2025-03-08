int fibonacciSeries(int n){
    int a=0,b=1,c=a+b;
    for(int i=0;i<n;i++){
        printf("%d ", a);
        a=b;
        b=c;
        c=a+b;
    }
}