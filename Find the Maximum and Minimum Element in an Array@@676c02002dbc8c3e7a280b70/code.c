#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    int max=a[0],min=a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
    return 0;
}