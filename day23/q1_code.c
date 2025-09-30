#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0; 
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 1; 
    }

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator; 

        numerator += 2;
        denominator += 4;
    }

    printf("The sum of the series up to %d terms is: %.4lf\n", n, sum); 

    return 0;
}