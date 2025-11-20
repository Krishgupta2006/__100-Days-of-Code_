#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fpIn, *fpOut;
    char str[500];
    int i;

    fpIn = fopen("input.txt", "r");
    fpOut = fopen("output.txt", "w");

    if (fpIn == NULL || fpOut == NULL) {
        printf("File error!");
        return 1;
    }

    fgets(str, 500, fpIn);   

    // Convert to sentence case
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    fputs(str, fpOut);   

    printf("Sentence case conversion done. Check output.txt");

    fclose(fpIn);
    fclose(fpOut);

    return 0;
}
