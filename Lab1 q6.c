C program that calculates the volume and surface area of a sphere based on the radius input by the user. The program uses the mathematical formulas provided:
Volume of a sphere: 𝑉=4/3𝜋r^3
Surface area of a sphere: 4𝜋r^2

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846  // Define the value of PI

int main() {
    double radius;
    double volume;
    double surface_area;

    // Prompt user for radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate volume and surface area
    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    surface_area = 4.0 * PI * pow(radius, 2);

    // Output results
    printf("Volume of the sphere: %.2lf\n", volume);
    printf("Surface area of the sphere: %.2lf\n", surface_area);

    return 0;
}

