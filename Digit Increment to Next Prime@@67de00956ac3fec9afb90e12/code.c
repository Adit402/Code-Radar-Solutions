int incrementToPrimeDigits(int n) {
    int i, isPrime;

    n++;
    while (1) {
        isPrime = 1;
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            return n;

        n++; 
    }
}