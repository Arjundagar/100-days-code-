

#include <stdio.h> 

int main() {
    int arr[100];
    int n, i, elementToInsert, position;

    printf("Enter the number of elements in the array (max 99): ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to insert: ");
    scanf("%d", &elementToInsert);

    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1; 
    }

  
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = elementToInsert;

    n++;

    printf("\nThe array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

