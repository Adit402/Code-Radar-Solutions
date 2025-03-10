#include <stdio.h>

#define MAX 100000  
int main() {
    int n, i,a;
    scanf("%d", &n);
    int a[n], freq[MAX] = {0};  

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;  
    }
    for (i = 0; i < n; i++) {
        if (freq[a[i]] != 0) {  
            num=freq[a[i]];
            if(num<freq[a[i]]){
                a=freq[a[i]];
            }
            freq[a[i]] = 0;
        }
    }
    printf("%d",a);
    return 0;
}
