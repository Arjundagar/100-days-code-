#include <stdio.h> 

int main() {
    int num1, num2;
    int hcf = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int smaller = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= smaller; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0; 
}

