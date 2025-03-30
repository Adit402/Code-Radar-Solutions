#include<math.h>

int digitRightShift(int n){
    int i,j,num,digit,ctr=0,sum=0;
    n=num;
    digit=n%10;
    while(n>0){
        ctr++;
        n/=10;
    }
    sum= digit*pow(10,ctr)+num%10;
    return sum;
}