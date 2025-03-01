#include <stdio.h>

#define MAX 10000 

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], hash[MAX] = {0}; 

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        hash[a[i]]++; 
    }

    int found = 0;
    for (i = 0; i < MAX; i++) {
        if (hash[i] > 1) {
            printf("%d " ,i);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicates found.\n");
    }

    return 0;
}
