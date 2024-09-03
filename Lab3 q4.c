#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Not a prime number
    if (num == 2) return 1; // 2 is a prime number
    if (num % 2 == 0) return 0; // Even number greater than 2 is not prime

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int number;
    int primeCount = 0, compositeCount = 0;

    do {
        // Input a number from the user
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &number);

        if (number == -1) {
            break; // Exit the loop if -1 is entered
        }

        if (number > 1) {
            if (isPrime(number)) {
                primeCount++; // Increment prime count
            } else {
                compositeCount++; // Increment composite count
            }
        }
        // Note: We do nothing if the number is 1 or less than 1 (not prime or composite)

    } while (1); // Infinite loop, exit with break statement

    // Output the counts
    printf("Number of prime numbers: %d\n", primeCount);
    printf("Number of composite numbers: %d\n", compositeCount);

    return 0;
}
