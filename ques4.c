#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle is: %f\n", area);
    printf("Circumference of the circle is: %f\n", circumference);

    return 0;
}
