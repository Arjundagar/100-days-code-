#include <stdio.h>

int main() {
    int nums[100], n, i, j, count;
    int majority = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check each element for majority condition
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(nums[i] == nums[j])
                count++;
        }

        // Check if count is greater than n/2
        if(count > n / 2) {
            majority = nums[i];
            break; // leftmost majority found
        }
    }

    // Output result
    if(majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("-1\n");

    return 0;
}
