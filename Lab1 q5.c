#include <stdio.h>
#include <math.h>  // For pow() function to compute compound interest

int main() {
    double P, T, R;     // Principal, Number of years, Rate of interest
    double SI, CI;      // Simple Interest and Compound Interest

    // Prompt user to enter the principal amount
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);

    // Prompt user to enter the number of years
    printf("Enter the number of years (T): ");
    scanf("%lf", &T);

    // Prompt user to enter the annual interest rate
    printf("Enter the annual interest rate (R): ");
    scanf("%lf", &R);

    // Calculate Simple Interest
    SI = (P * T * R) / 100.0;

    // Calculate Compound Interest
    // Compound Interest formula: CI = P * (1 + R/100)^T - P
    CI = P * pow((1 + R / 100.0), T) - P;

    // Display the results
    printf("Simple Interest (SI): %.2lf\n", SI);
    printf("Compound Interest (CI): %.2lf\n", CI);

    return 0;
}
