#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("%s\n", s.name);
    printf("%d\n", s.roll_no);
    printf("%.2f\n", s.marks);
}

int main() {
    struct Student s1;

    scanf("%49s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%f", &s1.marks);

    display(s1);

    return 0;
}
