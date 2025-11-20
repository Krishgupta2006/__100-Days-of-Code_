#include <stdio.h>

int main() {
    char str[200];
    int i = 0, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c. ", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (str[i + 1] != ' ' && str[i + 1] != '\n') {
                lastSpace = i;
                printf("%c. ", str[i + 1]);
            }
        }
        i++;
    }

    i = lastSpace + 1;
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
