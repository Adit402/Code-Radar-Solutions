int digitRightShift(int n){
    int i,j,num,digit,ctr=0,sum;
    num=n;
    digit=n%10;
    while(n>0){
        ctr++;
        n/=10;
    }
    for(i=1;i<=ctr;i++){
        i*=10;
    }
    sum= (digit*i)+(num/10);
    return sum;
}