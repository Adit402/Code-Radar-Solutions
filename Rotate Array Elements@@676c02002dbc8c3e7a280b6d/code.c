#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int a[n],temp,j,i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(j=0;j<=k;j++)
    {
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}