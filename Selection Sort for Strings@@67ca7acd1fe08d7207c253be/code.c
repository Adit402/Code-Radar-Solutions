void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (arr[j][k] != '\0' && arr[min_idx][k] != '\0') {
                if (arr[j][k] < arr[min_idx][k]) {
                    min_idx = j;
                    break;
                } else if (arr[j][k] > arr[min_idx][k]) {
                    break;
                }
                k++;
            }
            if (arr[j][k] != '\0' && arr[min_idx][k] == '\0') {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            for (int k = 0; k < 100; k++) {
                char temp = arr[i][k];
                arr[i][k] = arr[min_idx][k];
                arr[min_idx][k] = temp;

                if (arr[i][k] == '\0' && arr[min_idx][k] == '\0')
                    break;
            }
        }
    }
}