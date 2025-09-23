#include <stdio.h> 

int main() {
   
    int day_number;

   
    printf("Enter a number (1-7) to find the day of the week: ");
    scanf("%d", &day_number);

  
    switch (day_number) {
        case 1: 
            printf("It's Sunday!\n");
            break;
        case 2:
            printf("It's Monday!\n");
            break;
        case 3: 
            printf("It's Tuesday!\n");
            break;
        case 4: 
            printf("It's Wednesday!\n");
            break;
        case 5: 
            printf("It's Thursday!\n");
            break;
        case 6: 
            printf("It's Friday!\n");
            break;
        case 7: 
            printf("It's Saturday!\n");
            break;
        default: 
            printf("Oops! That's not a valid number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0; 
}
