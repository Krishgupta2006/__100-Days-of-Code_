#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int temp; // A single temporary variable for swapping

    // Loop until the start and end pointers meet or cross
    while (start < end) {
        // Swap elements at the start and end pointers
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int n, i;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Read elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to reverse the array in-place
    reverseArray(arr, n);

    // Print the reversed array
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
