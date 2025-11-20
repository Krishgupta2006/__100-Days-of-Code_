#include <stdio.h>

int main() {
    char s[200], t[200];
    int freq[26] = {0};

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int i = 0;

    // Count frequency of characters in s
    while (s[i] != '\0' && s[i] != '\n') {
        freq[s[i] - 'a']++;
        i++;
    }

    i = 0;
    // Decrease frequency using t
    while (t[i] != '\0' && t[i] != '\n') {
        freq[t[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

