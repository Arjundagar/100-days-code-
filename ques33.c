
#include <stdio.h> 
#include <math.h>  

int main() {
    int n;
    int original_number;
    int remainder;
    int result = 0;
    int num_digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    original_number = n;

    int temp = n; 
    
    if (temp == 0) {
        num_digits = 1;
    } else {
        while (temp != 0) {
            temp /= 10; 
            num_digits++; 
        }
    }

    temp = original_number; 

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, num_digits);
        temp /= 10;
    }

    if (result == original_number) {
        printf("%d is an Armstrong number.\n", original_number);
    } else {
        printf("%d is not an Armstrong number.\n", original_number);
    }

    return 0; 
}

