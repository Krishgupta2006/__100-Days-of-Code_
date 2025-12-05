#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    scanf("%49s", s1.name);
    scanf("%d", &s1.roll);
    scanf("%f", &s1.marks);

    scanf("%49s", s2.name);
    scanf("%d", &s2.roll);
    scanf("%f", &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll == s2.roll &&
       s1.marks == s2.marks)
        printf("Identical\n");
    else
        printf("Not Identical\n");

    return 0;
}
