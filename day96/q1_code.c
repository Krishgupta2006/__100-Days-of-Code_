#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    scanf("%49s", e.name);
    scanf("%d", &e.id);
    scanf("%d%d%d", &e.join.day, &e.join.month, &e.join.year);

    printf("%s\n", e.name);
    printf("%d\n", e.id);
    printf("%02d-%02d-%04d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
