#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s, *p;

    p = &s;

    scanf("%49s", p->name);
    scanf("%d", &p->roll);
    scanf("%f", &p->marks);

    printf("%s\n", p->name);
    printf("%d\n", p->roll);
    printf("%.2f\n", p->marks);

    return 0;
}
