#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 || num2 == 0) {
        printf("LCM is not defined for zero.\n");
    } else {
        int gcd = findGCD(num1, num2);
        long long lcm = (long long)num1 * num2 / gcd; 
        printf("LCM of %d and %d is %lld.\n", num1, num2, lcm);
    }

    return 0;
}