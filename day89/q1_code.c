#include <stdio.h>

enum Status {
    START = 5,
    PROCESS = 10,
    END = 15
};

int main() {
    printf("START = %d\n", START);
    printf("PROCESS = %d\n", PROCESS);
    printf("END = %d\n", END);

    return 0;
}
