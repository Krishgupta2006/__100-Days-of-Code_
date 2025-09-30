#include <stdio.h>

int main() {
    // Array must have a fixed size to accommodate new element
    int arr[100]; 
    int current_size;
    int element_to_insert;
    int i, position;

    // Get the current number of elements
    printf("Enter the number of elements (max 99): ");
    scanf("%d", &current_size);

    // Read the sorted elements
    printf("Enter %d integers in sorted (ascending) order:\n", current_size);
    for (i = 0; i < current_size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get the element to insert
    printf("\nEnter the element to insert: ");
    scanf("%d", &element_to_insert);

    // Find the position to insert the new element
    for (i = 0; i < current_size; i++) {
        if (arr[i] > element_to_insert) {
            position = i;
            break;
        }
    }
    // If the element is larger than all others, it goes at the end
    if (i == current_size) {
        position = current_size;
    }

    // Shift elements to the right to make space
    for (i = current_size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[position] = element_to_insert;
    current_size++; // Increase the size of the array

    // Print the final array
    printf("\nArray after insertion: ");
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
