#include <stdio.h>

int isPrime(int num){
    int i,ctr=2;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
        else{
            ctr++;
        }
    }
    if(ctr>=num-1){
        printf("1 ");
    }
    return 0;
}