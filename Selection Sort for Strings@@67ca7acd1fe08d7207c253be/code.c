void selectionSort(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int n = length;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (str[j] < str[min_idx]) {
                min_idx = j;
            }
        }
        // Swap
        if (min_idx != i) {
            char temp = str[i];
            str[i] = str[min_idx];
            str[min_idx] = temp;
        }
    }
}