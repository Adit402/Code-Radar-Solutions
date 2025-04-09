#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};
    int i;

    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;  
        }
    }

    return 1;  
}

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);

    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
