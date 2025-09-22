#include <stdio.h> 
int main() {
    
    int percentage;
    printf("Enter your percentage (0-100): ");

    scanf("%d", &percentage);
    if (percentage > 100 || percentage < 0) {
        printf("Error: Please enter a percentage between 0 and 100.\n");
    }
  
    else if (percentage >= 90) {
        printf("Your grade is: A\n");
    }
  
    else if (percentage >= 80) {
        printf("Your grade is: B\n");
    }
   
    else if (percentage >= 70) {
        printf("Your grade is: C\n");
    }
    
    else if (percentage >= 60) {
        printf("Your grade is: D\n");
    }
   
    else {
        printf("Your grade is: F\n");
    }

    return 0;
}

