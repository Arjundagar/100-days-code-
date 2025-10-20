#include <stdio.h>

int main() {
    // Declare a variable to store the integer
    int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");

    // Read the integer input from the user
    scanf("%d", &number);

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        // If the remainder is 0, it's an even number
        printf("%d is an even number.\n", number);
    } else {
        // If the remainder is not 0, it's an odd number
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
