#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter the file name to append text: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    getchar();

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text successfully appended to the file.\n");

    fclose(fp);

    return 0;
}
