void printPrimesInRange(int a, int b){
    int ctr=0;
    for(int i=a;i<=b;i++){
        if(i==2 || i==3 || i==5 && i>1){
            printf("%d ", i);
        }
        else if( i%2!=0 && i%3!=0 && i%5!=0){
            printf("%d ", i);
        }
        else{
            ctr++;
        }
    }
    if(ctr >(b-a-2)){
        printf("No prime numbers");
    }
}