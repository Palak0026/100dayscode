//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number, operator (+, -, *, /, %%), and second number: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch(operator) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", (float)num1 / num2);
            else
                printf("Division by zero not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
