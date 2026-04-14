#include "stdio.h"

int main () {
    int num1, num2;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Modulus: %d\n", num1 % num2);
    return 0;
}