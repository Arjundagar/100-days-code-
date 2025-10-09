
#include <stdio.h> 
#include <limits.h>

int main() {
    int arr[100]; 
    int n, i;
    int largest, secondLargest;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("You need at least two elements to find the second largest.\n");
        return 1; 
    }

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }


    if (secondLargest == INT_MIN) {
        printf("\nThere is no second largest element (all elements might be the same).\n");
    } else {
        printf("\nThe second largest element in the array is: %d\n", secondLargest);
    }

    return 0;
}
