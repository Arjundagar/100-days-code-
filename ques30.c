#include <stdio.h>

int main() {
    int n;
    int reversed_number = 0;
    int remainder;
    printf("Enter an integer to reverse: ");
    scanf("%d", &n);
        while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10; 
    }

    printf("Reversed number = %d\n", reversed_number);

    return 0;
}

