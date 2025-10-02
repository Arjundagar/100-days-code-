#include <stdio.h> 
#include <string.h> 

int main() {
    char binary_num[101]; 
    int i;
    int error = 0; 
    printf("Enter a binary number: ");
    scanf("%s", binary_num);

    for (i = 0; i < strlen(binary_num); i++) {
        if (binary_num[i] == '0') {
            binary_num[i] = '1'; 
        } 
        else if (binary_num[i] == '1') {
            binary_num[i] = '0'; 
        } 
        else {
            printf("Error: Invalid binary number entered.\n");
            error = 1; 
            break;     
        }
    }
    if (error == 0) {
        printf("The 1's complement is: %s\n", binary_num);
    }

    return 0; 
}

