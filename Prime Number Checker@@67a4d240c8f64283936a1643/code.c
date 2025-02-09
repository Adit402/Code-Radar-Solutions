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
    if(ctr>=num){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}