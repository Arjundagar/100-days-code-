#include <stdio.h> 

int main() {
    int n;
    int i;
    double sum = 0.0;
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        sum = sum + (double)(2 * i) / (double)(4 * i - 1);
    }

    printf("Sum of the series up to %d terms is: %f\n", n, sum);

    return 0;
}