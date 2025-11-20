#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    for (r = ADMIN; r <= GUEST; r++) {
        if (r == ADMIN)
            printf("Admin: Full access granted.\n");
        else if (r == USER)
            printf("User: Limited access granted.\n");
        else if (r == GUEST)
            printf("Guest: Read-only access.\n");
    }

    return 0;
}
