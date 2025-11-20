#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using sum formula logic in one pass
    int sum = 0, actualSum = 0;

    for (i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    // Expected sum if no repetition (1 to n-1)
    sum = (n - 1) * n / 2;

    int repeated = actualSum - sum;

    printf("Repeated element: %d\n", repeated);

    return 0;
}
