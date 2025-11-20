#include <stdio.h>

int main() {
    char s[500];
    fgets(s, sizeof(s), stdin);

    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;
    int i = 0;

    while (s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];

        if (lastIndex[(unsigned char)ch] >= start) {
            start = lastIndex[(unsigned char)ch] + 1;
        }

        lastIndex[(unsigned char)ch] = i;

        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }

        i++;
    }

    printf("%d", maxLength);
    return 0;
}
