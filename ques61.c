#include <stdio.h> 

int main() {
    int arr[100];     
    int n, i;
    int searchElement; 
    int found = 0;   
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
    printf("\nEnter the element you want to search for: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            printf("\nElement %d found at position %d.\n", searchElement, i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("\nElement %d was not found in the array.\n", searchElement);
    }

    return 0;
}

