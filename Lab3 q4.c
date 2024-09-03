#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // Numbers <= 1 are not prime
    if (num == 2) return 1;  // 2 is the only even prime number
    if (num % 2 == 0) return 0;  // Other even numbers are not prime

    // Check for factors from 3 to the square root of num
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;  // num is divisible by i, hence not prime
    }
    return 1;  // num is prime
}

int main() {
    int number;
    int primeCount = 0, compositeCount = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &number);

        if (number == -1) {
            break;  // Exit the loop if -1 is entered
        }

        if (number > 1) {
            if (isPrime(number)) {
                primeCount++;
            } else {
                compositeCount++;
            }
        }
        // Note: 1 is neither prime nor composite, so we do nothing for 1

    } while (1);  // Continue the loop indefinitely until -1 is entered

    printf("Number of prime numbers: %d\n", primeCount);
    printf("Number of composite numbers: %d\n", compositeCount);

    return 0;
}
