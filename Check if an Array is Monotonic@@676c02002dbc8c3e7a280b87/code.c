#include<stdio.h>

int main(){
    int n,i,j,temp;
    scanf("%d", &n);
    int a[n],ctr=0;
    if(n==1){
        printf("YES");
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                ctr++;
            }
            // else{
            //     printf("YES");
            //     return 0;
            // }
        }
    }
    // printf("NO");
    if(ctr>n-1){
        printf("NO");
    }
    else{
        printf("YES");
    }
}