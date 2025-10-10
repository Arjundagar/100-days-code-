#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end;

    printf("Enter a sentence: ");
    gets(str);
    i = 0;
    while(str[i] != '\0') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0') i++;
        end = i - 1;

        while(start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        if(str[i] != '\0') i++; 
    }

    printf("Sentence after reversing words: %s", str);
    return 0;
}
