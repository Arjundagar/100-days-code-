#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of rectangle is: %f\n", area);
    printf("Perimeter of rectangle is: %f\n", perimeter);

    return 0;
}
