#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // The number of rows in the pattern

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing stars in a row
    }

    return 0;
}