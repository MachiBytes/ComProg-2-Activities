#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    int a, b;
    char operator;
    int (*operation)(int, int); // Function pointer declaration

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    int result = operation(a, b); // Calling the selected operation using the function pointer

    printf("Result: %d\n", result);

    return 0;
}