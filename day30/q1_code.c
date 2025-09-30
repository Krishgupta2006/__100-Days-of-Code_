#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
          
            odd_count++;
        }
    }

    printf("\nTotal even numbers in the array: %d\n", even_count);
    printf("Total odd numbers in the array: %d\n", odd_count);

    return 0;
}
