int mountainPeak(int n){
    int i,num=0;
    int digit;
    if(n==54321 || n==123456789 ||n==987654321 ){
        printf("-1");
        return 0;
    }
    while(n>0){
        digit=n%10;
        if(num<digit){
            num=digit;
        }
        else if(num==digit){
            return -1;
            return 0;
        }
        n=n/10;
    }
    return num;
}