#include <stdio.h>

int main()
{
    double a, b;     // Declare variables for the input numbers
    double sum, diff, product, quotient; // Declare variables for results

    // Prompt user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &a);

    // Prompt user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &b);

    // Calculate the sum
    sum = a + b;

    // Calculate the difference
    diff = a - b;

    // Calculate the product
    product = a * b;

    // Calculate the quotient and handle division by zero
    if (b != 0) {
        quotient = a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        quotient = 0; // Assign a default value for the quotient in case of error
    }

    // Display the results
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", diff);
    printf("Product: %.2lf\n", product);
    if (b != 0) {
        printf("Quotient: %.2lf\n", quotient);
    }

    return 0;
}
