#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Choose an operator: ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            printf("Result: %f\n", num1 / num2);
            break;
        case '%':
            printf("Result: %d\n", num1 % num2);
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
