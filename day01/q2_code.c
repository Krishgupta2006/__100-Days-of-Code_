#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);

    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
