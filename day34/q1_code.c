#include <stdio.h>

int main() {
    // Array with a fixed maximum size (e.g., 100)
    int arr[100];
    int current_size;
    int element_to_insert;
    int position;
    int i;

    // Get the current number of elements
    printf("Enter the number of elements (max 99): ");
    scanf("%d", &current_size);

    // Read the initial elements into the array
    printf("Enter %d integers:\n", current_size);
    for (i = 0; i < current_size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get the new element and position from the user
    printf("\nEnter the element to insert: ");
    scanf("%d", &element_to_insert);
    printf("Enter the position (1 to %d) where element is to be inserted: ", current_size + 1);
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > current_size + 1) {
        printf("Invalid position. Insertion failed.\n");
        return 1;
    }
    
    // Shift elements to the right to make space for the new element
    for (i = current_size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[position - 1] = element_to_insert;
    current_size++; // Increase the size of the array
    
    // Print the final array
    printf("\nArray after insertion: ");
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
