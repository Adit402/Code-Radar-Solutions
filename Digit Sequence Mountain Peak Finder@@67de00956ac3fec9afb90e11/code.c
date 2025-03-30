int mountainPeak(int n){
    int i,num=0;
    while(n>0){
        int digit=n%10;
        if(num<digit)(
            num=digit;
        )
        if(num==digit)(
            return -1;
            return 0;
        )
        n=n/10;
    }
    return num;
}