#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // false
    if (num <= 3) return 1; // true
    if (num % 2 == 0 || num % 3 == 0) return 0; // false

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0; // false
    }
    return 1; // true
}

int main() {
    int lower, upper;

    // Input the limits from user
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Generate prime numbers in the given range
    int num = lower;
    while (num <= upper) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
        num++;
    }
    printf("\n");

    return 0;
}
