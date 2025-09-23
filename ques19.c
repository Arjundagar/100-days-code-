#include <stdio.h> 

int main() {
    int a, b, c;

    
    printf("Enter the three side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        
        if (a == b && b == c) {
            printf("This is an Equilateral triangle.\n");
        }
       
        else if (a == b || b == c || a == c) {
            printf("This is an Isosceles triangle.\n");
        }
      
        else {
            printf("This is a Scalene triangle.\n");
        }
    }
    
    else {
        printf("Sorry, these side lengths cannot form a valid triangle.\n");
    }

    return 0; 
}
