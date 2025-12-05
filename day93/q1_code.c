#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for(i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("%s\n", s[maxIndex].name);
    printf("%d\n", s[maxIndex].roll_no);
    printf("%.2f\n", s[maxIndex].marks);

    return 0;
}
