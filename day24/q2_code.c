#include <stdio.h>

int main() {
    int rows = 5; // You can change this to print a different number of rows
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= rows; ++i) {
        // Inner loop for columns (printing numbers)
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        // Print a new line character to move to the next row
        printf("\n");
    }

    return 0;
}
