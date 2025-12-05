#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*)malloc(sizeof(struct Student));

    scanf("%49s", s->name);
    scanf("%d", &s->roll);
    scanf("%f", &s->marks);

    printf("%s\n", s->name);
    printf("%d\n", s->roll);
    printf("%.2f\n", s->marks);

    free(s);
    return 0;
}
