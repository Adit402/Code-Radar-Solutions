int incrementToPrimeDigits(int num) {
    int digits[10];
    int count = 0;

    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }
    for (int i = count - 1; i >= 0; i--) {
        return nextPrimeDigit(digits[i]);
    }
    
}

int nextPrimeDigit(int digit) {
    if (digit <= 1) return 2;
    else if (digit == 2) return 3;
    else if (digit <= 3) return 5;
    else if (digit <= 5) return 7;
    else return 7;
}
