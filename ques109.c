#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int maxSum = 0, currentSum;

    // Input size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input size of subarray
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Initialize maxSum with sum of first k elements
    currentSum = 0;
    for(i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Calculate sum for remaining subarrays of size k
    for(i = 1; i <= n - k; i++) {
        currentSum = 0;
        for(j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // Print the maximum sum
    printf("%d\n", maxSum);

    return 0;
}
