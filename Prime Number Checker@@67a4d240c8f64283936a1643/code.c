#include <stdio.h>

int isPrime(int num){
    int i,ctr=2;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
        else{
            ctr++;
        }
    }
    if(ctr>=num-2){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}