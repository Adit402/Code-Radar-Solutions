void selectionSort(char str[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < length; j++) {
            if (str[j] < str[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            char temp = str[i];
            str[i] = str[min_idx];
            str[min_idx] = temp;
        }
    }
}