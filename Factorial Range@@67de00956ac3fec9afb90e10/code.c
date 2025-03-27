void factorialRange(int n, int num){
    int i,j,fact=1;
    if(n<0 || n>num){
        printf("Invalid range");
    }
    for(i=n;i<=num;i++){
        for(j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
        fact=1;
    }
}