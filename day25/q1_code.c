#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Outer loop for the rows, decreasing from 5 to 1
    for (i = 5; i >= 1; --i) {
        // Inner loop for printing numbers, increasing from the current row value to 5
        for (j = i; j <= 5; ++j) {
            printf("%d", j);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
