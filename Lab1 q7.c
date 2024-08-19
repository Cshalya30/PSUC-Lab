#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Prompt user for temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Output the result
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}
