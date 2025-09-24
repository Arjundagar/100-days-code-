#include <stdio.h> 

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result: %.1lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.1lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.1lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.1lf\n", num1 / num2);
            } else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}

