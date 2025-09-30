#include <stdio.h>

int main() {
    int i, j;
    int max_rows = 5;

    for (i = 1; i <= max_rows; i += 2) { 
        // Print leading spaces
        for (j = 0; j < (max_rows - i) / 2; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = max_rows - 2; i >= 1; i -= 2) {
        // Print leading spaces
        for (j = 0; j < (max_rows - i) / 2; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
