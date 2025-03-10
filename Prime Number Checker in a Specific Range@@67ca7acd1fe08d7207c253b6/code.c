void printPrimesInRange(int a, int b){
    int ctr=0;
    if(a<2){
        a=2;
        for(int i=a;i<=b;i++){
                if(i!=1){
                if(i==2 || i==3 || i==5 ){
                    printf("%d ", i);
                }
                for(int j=2;j*j<i;j++){
                    if(i%j==0)return 0;
                }
                    return 1;
                else{
                    ctr++;
                }
        }
        }
    }
    if(ctr >=(b-a)){
        printf("No prime numbers");
    }
}