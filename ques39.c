#include <stdio.h> // for printf and scanf

int main() {
    int n;
    long long product = 1;
    int remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int original_num = n;

    while (n != 0) {
        remainder = n % 10;
        
        if (remainder % 2 != 0) {
            product = product * remainder;
        }
        
        n = n / 10;
    }

    printf("The product of the odd digits of %d is: %lld\n", original_num, product);

    return 0; // End of the program
}

