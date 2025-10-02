#include <stdio.h> 

int main() {
    int n;
    int binary_array[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("Binary equivalent is: 0\n");
        return 0;
    }

    while (n > 0) {
        binary_array[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    printf("\n");

    return 0; 
}

