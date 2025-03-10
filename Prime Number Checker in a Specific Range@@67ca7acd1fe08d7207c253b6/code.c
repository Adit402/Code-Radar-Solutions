void printPrimesInRange(int a, int b){
    for(int i=a;i<=b;i++){
        if(i==2 || i==3 || i==5){
            printf("%d ", i);
        }
        else if( i%2!=0 && i%3!=0 && i%5!=0){
            printf("%d ", i);
        }
    }
}