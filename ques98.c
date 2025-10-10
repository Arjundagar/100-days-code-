#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    gets(name); 

    printf("Formatted name: ");

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i; 
    }

    for(i = 0; i <= lastSpace; i++) {
        if(i == 0 || (name[i] == ' ' && name[i+1] != '\0')) {
            printf("%c. ", name[i+1]); 
        }
    }

    printf("%s", &name[lastSpace+1]);

    return 0;
}
