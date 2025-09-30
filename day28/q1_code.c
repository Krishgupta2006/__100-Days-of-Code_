#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n, i;

    printf("Enter a positive integer 'n' to find all prime numbers up to it: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
