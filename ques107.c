#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int prevGreater[100];

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element for each element
    for(i = 0; i < n; i++) {
        prevGreater[i] = -1;  // Default if no previous greater element found
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater[i] = arr[j];
                break;  // Stop searching once previous greater is found
            }
        }
    }

    // Print the results in comma separated format
    for(i = 0; i < n; i++) {
        if(i == n - 1)
            printf("%d\n", prevGreater[i]);
        else
            printf("%d, ", prevGreater[i]);
    }

    return 0;
}