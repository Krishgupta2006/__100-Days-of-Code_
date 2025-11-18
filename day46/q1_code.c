#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];
        char low = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (low != 'a' && low != 'e' && low != 'i' && low != 'o' && low != 'u') {
            result[j] = ch;
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
