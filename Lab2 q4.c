#include <stdio.h>

int main() {
    int a, b, c;
    int smallest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the smallest number using conditional operator
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Print the smallest number
    printf("The smallest number is %d\n", smallest);

    return 0;
}
