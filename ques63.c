
#include <stdio.h> 

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int n1, n2, n3;
    int i, j;

    printf("Enter the number of elements for the first array (max 100): ");
    scanf("%d", &n1);

    printf("Enter the %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the number of elements for the second array (max 100): ");
    scanf("%d", &n2);

    printf("Enter the %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;
    for (i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    
    for (i = 0, j = n1; i < n2; i++, j++) {
        mergedArr[j] = arr2[i];
    }

    printf("\nThe merged array is:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

