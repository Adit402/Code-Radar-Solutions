#include <stdio.h>

int isPrime(int num){
    int i,ctr;
    for(i=2;i<num;i++){
        if(num%i!=0){
            ctr++;
        }
        else{
            printf("0");
            break;
        }
    }
    if(ctr>num/2){
        printf("1");
    }
    return 0;
}