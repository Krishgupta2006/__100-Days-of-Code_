#include <stdio.h>

int main() {
    int rows = 5; // You can change this to print a different number of rows
    int i, j;

    // Outer loop for the rows, from 5 down to 1
    for (i = rows; i >= 1; --i) {
        // Inner loop to print the leading spaces
        for (j = 0; j < rows - i; ++j) {
            printf(" ");
        }
        // Inner loop to print the stars
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
