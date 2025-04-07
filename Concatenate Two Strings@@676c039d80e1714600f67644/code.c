#include <stdio.h>

int main() {
    char str1[100];
    char str2[];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; 

    printf("Concatenated String: %s\n", str1);

    return 0;
}
