#include <stdio.h> 

int main() {
    int n;
    int i;
    double sum = 0.0;
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        sum = 1.0;
    }

    for (i = 2; i <= n; i++) {
        
        sum = sum + (double)(2 * i - 1) / (double)(2 * i);
    }

    printf("Sum of the series up to %d terms is: %f\n", n, sum);

    return 0; 
}

