#include <stdio.h> 

int main() {
    int n;
    int sum = 0;
    int i;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n && n > 0) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0; 
}

