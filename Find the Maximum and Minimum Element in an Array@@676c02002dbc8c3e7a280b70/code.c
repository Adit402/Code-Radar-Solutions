#include <stdio.h>

int main() {
    int n,i,j,min,max;
    scanf("%d",&n);
    int a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
            max=a[j];
        }
        else{
            min=a[j];
        }
        }
    }
    printf("%d ",min);
    printf("%d",max);
    return 0;
}