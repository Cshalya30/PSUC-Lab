//To check whether a given number is a palindrome or not
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Input the number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Append it to the reversedNumber
        number /= 10; // Remove the last digit from the number
    }

    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
