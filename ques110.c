#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int max;

    // Input size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input size of subarray k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // For each subarray of size k
    for(i = 0; i <= n - k; i++) {
        max = arr[i];
        // Find maximum in the current window
        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        // Print max with space separator
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
