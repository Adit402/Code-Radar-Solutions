int incrementToPrimeDigits(int num) {
    int digits[10];
    int count = 0;

    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", nextPrimeDigit(digits[i]));
    }
    
}