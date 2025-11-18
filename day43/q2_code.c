#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0')
        j++;

    if (str[j - 1] == '\n')
        j--;

    int start = 0, end = j - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
