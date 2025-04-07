#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  

    printf("%s\n", str1);

    return 0;
}
