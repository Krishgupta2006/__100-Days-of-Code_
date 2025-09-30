#include <stdio.h>

int main() {
    // Array with a fixed maximum size (e.g., 100)
    int arr[100];
    int current_size;
    int position;
    int i;

    // Get the current number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &current_size);

    // Read the elements into the array
    printf("Enter %d integers:\n", current_size);
    for (i = 0; i < current_size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get the position of the element to delete
    printf("\nEnter the position (1 to %d) of the element to delete: ", current_size);
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > current_size) {
        printf("Invalid position. Deletion failed.\n");
        return 1;
    }

    // Shift elements to the left, overwriting the element at the specified position
    for (i = position - 1; i < current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    current_size--;

    // Print the final array
    printf("\nArray after deletion: ");
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
