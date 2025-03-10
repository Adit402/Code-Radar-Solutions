#include<stdio.h>

int main(){
    int i,j,n,ctr,num=0;
    scanf("%d", &n);
    int a[n];
   int freq[100001] = {0};
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;

        if (freq[a[i]] > 1) { 
            printf("%d", a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}