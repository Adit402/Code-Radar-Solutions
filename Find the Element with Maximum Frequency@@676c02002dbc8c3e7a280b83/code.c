#include <stdio.h>

#define MAX 100000  
int main() {
    int n, i,num;
    scanf("%d", &n);
    int a[n], freq[MAX] = {0};  

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;  
    }
    for (i = 0; i < n; i++) {
        if (freq[a[i]] != 0) {  
           if(freq[a[i]]>freq[a[i+1]]){
            num=freq[a[i]];
           }
            freq[a[i]] = 0; 
        }
    }
    printf("%d",num);
    return 0;
}
