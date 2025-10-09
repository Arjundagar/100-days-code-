#include <stdio.h> 

int main() {
    int arr[100]; 
    int n, i, key;
    int low, high, mid;
    int found = 0; 

    printf("Enter the number of elements (must be sorted, max 100): ");
    scanf("%d", &n);

    printf("Enter the %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search for: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2; 

        if (arr[mid] == key) {
            found = 1; 
            printf("Element %d found at position %d.\n", key, mid + 1);
            break; 
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (found == 0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0; 
}