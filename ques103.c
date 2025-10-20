#include <stdio.h>

int main() {
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0, pivot = -1;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }
    
    for(i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - arr[i]) {
            pivot = i;
            break; 
        }
        leftSum += arr[i];
    }
    
    printf("%d\n", pivot);
    return 0;
}
