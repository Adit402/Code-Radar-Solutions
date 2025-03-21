#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char str[]) {
    int i, count = 0;
    int length = strlen(str);
    int inWord = 0;
    for (i = 0; i < length; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1; 
            count++;
        }
    }
    return count;
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int wordCount = countWords(str);
    printf("%d", wordCount);

    return 0;
}
