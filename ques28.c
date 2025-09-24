#include <stdio.h> 

int main() {
    int n;
    long long product = 1;
    int i;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no even numbers up to %d to multiply.\n", n);
    } else {
        for (i = 2; i <= n; i += 2) {
            product = product * i; 
        }
        printf("The product of even numbers up to %d is: %lld\n", n, product);
    }

    return 0; 
}
