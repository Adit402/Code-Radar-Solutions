int mountainPeak(int n){
    int i,num=0;
    int digit;
    while(n>0){
        digit=n%10;
        if(num<digit)(
            num=digit;
        )
        else if(num==digit)(
            return -1;
            return 0;
        )
        n=n/10;
    }
    return num;
}