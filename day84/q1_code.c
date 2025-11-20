#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        if (s == SUCCESS)
            printf("Operation completed successfully.\n");
        else if (s == FAILURE)
            printf("Operation failed.\n");
        else if (s == TIMEOUT)
            printf("Operation timed out.\n");
    }

    return 0;
}
