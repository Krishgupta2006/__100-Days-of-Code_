#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.");
    return 0;
}
