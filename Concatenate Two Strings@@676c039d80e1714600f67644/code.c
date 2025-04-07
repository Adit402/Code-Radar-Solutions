#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    // Read strings from input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Remove newline from str2
    int j = 0;
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    // Find end of str1 again (i will be the index where we start appending)
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // Null-terminate the result

    printf("%s\n", str1);

    return 0;
}
