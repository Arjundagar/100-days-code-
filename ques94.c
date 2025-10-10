#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str); 

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';
            if(len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            len = 0;
        }
        if(str[i] == '\0')
            break;
        i++;
    }

    printf("Longest word: %s", longest);
    return 0;
}
