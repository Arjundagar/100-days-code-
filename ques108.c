#include <stdio.h>

int main() {
    int nums[100], n, i, j;
    int answer[100];
    
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product for each element except itself
    for(i = 0; i < n; i++) {
        int product = 1;
        for(j = 0; j < n; j++) {
            if(j != i) {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }

    // Print the result array
    for(i = 0; i < n; i++) {
        if(i == n - 1)
            printf("%d\n", answer[i]);
        else
            printf("%d, ", answer[i]);
    }

    return 0;
}
