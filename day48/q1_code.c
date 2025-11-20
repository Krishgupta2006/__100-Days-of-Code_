#include <stdio.h>

int main() {
    char str1[200], str2[200], concat[400];
    int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++) concat[k++] = str1[i];
    for (i = 0; i < len1; i++) concat[k++] = str1[i];
    concat[k] = '\0';

    for (i = 0; i <= k - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (concat[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not rotation");
    return 0;
}
