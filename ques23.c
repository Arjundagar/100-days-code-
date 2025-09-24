#include <stdio.h> 

int main() {
    
    int late_days;
    
    float fine = 0.0;

   
    printf("Enter the number of days the book is late: ");
    scanf("%d", &late_days);
    if (late_days <= 0) {
        printf("The book is not late. No fine!\n");
    }
   
    else if (late_days <= 5) {
        fine = late_days * 2; 
        printf("Your fine is: Rs. %.2f\n", fine);
    }

    else if (late_days <= 10) {
        
        fine = (5 * 2) + (late_days - 5) * 4;
        printf("Your fine is: Rs. %.2f\n", fine);
    }
    
    else if (late_days <= 30) {
        
        fine = (5 * 2) + (5 * 4) + (late_days - 10) * 6;
        printf("Your fine is: Rs. %.2f\n", fine);
    }
    else {
        printf("Your membership has been cancelled due to returning the book more than 30 days late.\n");
    }

    return 0; 
}
