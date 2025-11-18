#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0') {
        j++;
    }
    if (j > 0 && str[j - 1] == '\n') {
        j--; 
    }

    int start = 0, end = j - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
