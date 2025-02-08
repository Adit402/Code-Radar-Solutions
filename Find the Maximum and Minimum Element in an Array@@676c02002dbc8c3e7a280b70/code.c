#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,a,i,j,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            max=a[i];
        }
        else{
            min=a[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
    return 0;
}