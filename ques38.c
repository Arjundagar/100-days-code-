#include <stdio.h> 
int main() {
    int n;
    int sum = 0;
    int remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int original_num = n;

    while (n != 0) {
        remainder = n % 10;
        
        sum = sum + remainder;
                n = n / 10;
    }

    printf("The sum of the digits of %d is: %d\n", original_num, sum);

    return 0; 
}

