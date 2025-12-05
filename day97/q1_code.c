#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    scanf("%49s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("%s\n", e2.name);
    printf("%d\n", e2.id);
    printf("%.2f\n", e2.salary);

    return 0;
}
