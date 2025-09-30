#include <stdio.h>

int main() {
    int n, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++; 
        } else {
            zero_count++; 
        }
    }

    printf("\nTotal positive numbers: %d\n", positive_count);
    printf("Total negative numbers: %d\n", negative_count);
    printf("Total zeros: %d\n", zero_count);

    return 0;
}
