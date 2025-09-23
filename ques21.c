#include <stdio.h> 

int main() {
    
    int month_number;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number) {
        case 1:
            printf("It's January, which has 31 days.\n");
            break;
        case 2:
            printf("It's February, which has 28 or 29 days (in a leap year).\n");
            break;
        case 3:
            printf("It's March, which has 31 days.\n");
            break;
        case 4:
            printf("It's April, which has 30 days.\n");
            break;
        case 5:
            printf("It's May, which has 31 days.\n");
            break;
        case 6:
            printf("It's June, which has 30 days.\n");
            break;
        case 7:
            printf("It's July, which has 31 days.\n");
            break;
        case 8:
            printf("It's August, which has 31 days.\n");
            break;
        case 9:
            printf("It's September, which has 30 days.\n");
            break;
        case 10:
            printf("It's October, which has 31 days.\n");
            break;
        case 11:
            printf("It's November, which has 30 days.\n");
            break;
        case 12:
            printf("It's December, which has 31 days.\n");
            break;
        default:
            printf("Oops! That's not a valid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0; 
}