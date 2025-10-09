

#include <stdio.h> 

int main() {
    int arr[100]; 
    int n, i, position;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
        return 1; 
    }

   
    for (i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nThe array after deletion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

