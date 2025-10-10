#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d", spaces, digits, special);
    return 0;
}
