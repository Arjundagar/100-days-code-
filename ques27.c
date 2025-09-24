#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i;
    int current_odd = 1;

    printf("Enter the count of odd numbers (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (i = 1; i <= n; i++) {
            sum += current_odd;
            current_odd += 2;  
        }
        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    }

    return 0;
}

