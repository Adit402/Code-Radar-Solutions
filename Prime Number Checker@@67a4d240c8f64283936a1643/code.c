#include <stdio.h>

int isPrime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    return 0;
}