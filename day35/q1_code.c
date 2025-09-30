#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i;

    // Get the size of the array from the user
    printf("Enter the number of elements (minimum 2): ");
    scanf("%d", &n);

    // Validate that the array has at least 2 elements
    if (n < 2) {
        printf("Error: Array should have at least 2 elements.\n");
        return 1;
    }

    int arr[n];

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize the two largest numbers
    int first_largest = INT_MIN;
    int second_largest = INT_MIN;

    // Iterate through the array once to find the two largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > first_largest) {
            // If the current element is larger than the current largest,
            // the old largest becomes the new second largest
            second_largest = first_largest;
            first_largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != first_largest) {
            // If the current element is larger than the second largest
            // but not the largest, it becomes the new second largest
            second_largest = arr[i];
        }
    }

    // Print the result
    if (second_largest == INT_MIN) {
        printf("There is no second largest element (all elements might be the same).\n");
    } else {
        printf("\nThe second largest element is: %d\n", second_largest);
    }

    return 0;
}
