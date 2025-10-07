#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    int max, min; 

    printf("Enter the number of elements you want to store (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1; 
    }

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nThe maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0; 
}
