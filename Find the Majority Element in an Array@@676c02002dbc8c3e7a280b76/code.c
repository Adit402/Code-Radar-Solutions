#include <stdio.h>

#define MAX 100000  // Adjust based on the input range

int main() {
    int n, i, maxFreq = 0, mostFreqElement = -1;
    scanf("%d", &n);
    int a[n], freq[MAX] = {0};  // Frequency array (hash table)

    // Count the frequency of each element
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;  
    }

    // Find the element with the highest frequency
    for (i = 0; i < n; i++) {
        if (freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];
            mostFreqElement = a[i];  // Store the most frequent element
        } 
        else if (freq[a[i]] == maxFreq && mostFreqElement != a[i]) {
            mostFreqElement = -1;  // If there’s a tie, return -1
        }
    }

    printf("%d\n", mostFreqElement);
    return 0;
}
