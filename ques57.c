#include <stdio.h> 

int main() {
    int arr[100]; 
    int n, i;
    int sum = 0; 

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

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("\nThe sum of the array elements is: %d\n", sum);

    return 0; 
}

