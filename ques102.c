#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    if (x <= arr[0])
        return 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == x)
            return i;

        if (arr[i] < x && arr[i + 1] >= x)
            return i + 1;
    }

    return -1;
}

int main() {
    int n, x, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    if (index == -1)
        printf("Ceil of %d doesn't exist in the array.\n", x);
    else
        printf("Index of ceil of %d is: %d\n", x, index);

    return 0;
}
