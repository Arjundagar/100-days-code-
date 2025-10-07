#include <stdio.h> 

int main() {
    int arr[100]; 
    int n, i;
    int positiveCount = 0; 
    int negativeCount = 0;
    int zeroCount = 0;    

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
        if (arr[i] > 0) {
            positiveCount++; 
        } else if (arr[i] < 0) {
            negativeCount++; 
        } else {
            zeroCount++;
        }
    }

    printf("\nTotal positive numbers in the array: %d\n", positiveCount);
    printf("Total negative numbers in the array: %d\n", negativeCount);
    printf("Total zero elements in the array: %d\n", zeroCount);

    return 0; 

}