#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;
        
        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }
        
        for (int i = x; i <= n; i++) {
            rightSum += i;
        }
        
        if (leftSum == rightSum) {
            printf("Pivot integer is: %d\n", x);
            return 0;
        }
    }
    
    printf("-1\n");
    return 0;
}
