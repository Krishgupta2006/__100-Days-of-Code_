#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    int i, maxIndex = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    return s[maxIndex];
}

int main() {
    struct Student s[5], top;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    top = getTop(s, 5);

    printf("%s\n", top.name);
    printf("%d\n", top.roll_no);
    printf("%.2f\n", top.marks);

    return 0;
}
