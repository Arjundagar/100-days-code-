#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int nextGreater[100];

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element for each element
    for(i = 0; i < n; i++) {
        nextGreater[i] = -1;  // Default if no next greater element found
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break;  // Stop searching once next greater is found
            }
        }
    }

    // Print the results comma separated
    for(i = 0; i < n; i++) {
        if(i == n - 1)
            printf("%d\n", nextGreater[i]);
        else
            printf("%d, ", nextGreater[i]);
    }

    return 0;
}
