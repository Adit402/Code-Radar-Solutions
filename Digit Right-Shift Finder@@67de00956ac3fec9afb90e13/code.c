#include<math.h>

int digitRightShift(int n){
    int i,j,num,digit,ctr=0,sum=0;
    n=num;
    digit=n%10;
    while(n>0){
        ctr++;
        n/=10;
    }
    for(i=1;i<=ctr;i++){
        i*=10;
    }
    sum= digit*i+num/10;
    return sum;
}