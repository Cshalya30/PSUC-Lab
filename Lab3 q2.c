#include <stdio.h>

int main() {
    int number, originalNumber, digit, sum = 0;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the sum of the cubes of the digits
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit * digit * digit; // Add the cube of the digit to the sum
        number /= 10; // Remove the last digit from the number
    }

    // Check if the sum of the cubes of the digits equals the original number
    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
