#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    gets(str); 
    for(len = 0; str[len] != '\0'; len++);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}
