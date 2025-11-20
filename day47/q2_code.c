#include <stdio.h>

int main() {
    char str[300], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
        }
        i++;
    }

    printf("%s", longest);
    return 0;
}
