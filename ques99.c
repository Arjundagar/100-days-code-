#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date+3, 2); 
    month[2] = '\0';
    strcpy(year, date+6);

    if(strcmp(month, "04") == 0)
        printf("Formatted date: %s-Apr-%s", day, year);
    else
        printf("Month is not April.");

    return 0;
}
