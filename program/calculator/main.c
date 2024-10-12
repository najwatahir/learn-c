#include <stdio.h>

int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator(+ - * /)");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2:");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\result: %.0lf", result); //%.0lf means there's 0 number after .
        break;
    case '-':
        result = num1 - num2;
        printf("\result: %.2lf", result); //%.2lf means there are 2 number after .
        break;
    case '*':
        result = num1 * num2;
        printf("\result: %.2lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\result: %.2lf", result);
        break;
    default:
        printf("%c is not a valid operator", operator);
    }

    return 0;
}