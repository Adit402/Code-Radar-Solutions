#include <stdio.h>

#define MAX 100001 

int main() {
    int n, i, max_freq = 0, max_elem;
    scanf("%d", &n);

    if (n == 0) { 
        printf("No elements in the array.");
        return 0;
    }

    int a[n], freq[MAX] = {0};

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++; 
        if (freq[a[i]] > max_freq) {
            max_freq = freq[a[i]];
            max_elem = a[i];
        }
    }

    printf("%d", max_elem);
   

    return 0;
}
