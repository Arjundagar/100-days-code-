#include <stdio.h> 

int main() {
    int arr[100]; 
    int n, i;
    int evenCount = 0; 
    int oddCount = 0;  

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
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    }

    
    printf("\nTotal even numbers in the array: %d\n", evenCount);
    printf("Total odd numbers in the array: %d\n", oddCount);

    return 0; 
}

