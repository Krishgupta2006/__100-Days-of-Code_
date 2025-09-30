#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    // Outer loop for the rows
    for (i = 1; i <= rows; ++i) {
        // Inner loop to print the leading spaces
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Inner loop to print the numbers
        for (j = rows - i + 1; j <= rows; ++j) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
