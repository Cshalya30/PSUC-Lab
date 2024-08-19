#include <stdio.h>

int main() {
    char character;  // Declare a variable to store the character

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is %d\n", character, (int)character);

    return 0;
}
