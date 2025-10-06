#include <stdio.h> 
int main() {
    int n;
    int sum = 0;
    int i;
    int original_num;
    int lastDigit;
        printf("Enter an integer: ");
    scanf("%d", &n);
    
    original_num = n; 

    while (n > 0) {
        lastDigit = n % 10; 
        int factorial = 1;
        for (i = 1; i <= lastDigit; i++) {
            factorial = factorial * i;
        }
        
        sum = sum + factorial;
        
        n = n / 10;
    }

    if (sum == original_num && original_num > 0) {
        printf("%d is a strong number.\n", original_num);
    } else {
        printf("%d is not a strong number.\n", original_num);
    }

    return 0; 
}

