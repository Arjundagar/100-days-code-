#include <stdio.h> 
#include <math.h>

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_num = n; 

    int lastDigit = n % 10;
        int digits = (int)log10(n);
    
    int firstDigit = (int)(n / pow(10, digits));
    
    int swappedNum = lastDigit * (int)pow(10, digits);
    
    swappedNum += n % (int)pow(10, digits);
        swappedNum -= lastDigit;
    
    swappedNum += firstDigit;
    
    printf("Original number: %d\n", original_num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0; 
}
