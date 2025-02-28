#include<stdio.h>
int main(){
    int i,l=0,digit,count=0,n;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        while(a[i]>0){
            digit=a[i]%10;
            l= 10*l+digit;
            a[i]= a[i]/10;
        }
        if(l==a[i]){
            count++;
        }
        l=0;
    }
    printf("%d", count);

}