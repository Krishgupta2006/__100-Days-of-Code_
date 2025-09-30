#include <stdio.h>

int main() {
    int n, i, search_element;
    int found = 0; // Flag to check if the element was found

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

    // Get the element to search for
    printf("\nEnter the element to search: ");
    scanf("%d", &search_element);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            found = 1; // Element found, set flag to 1
            break;     // Exit the loop
        }
    }

    // Print the result
    if (found == 1) {
        printf("%d is present at location %d.\n", search_element, i + 1);
    } else {
        printf("%d is not present in the array.\n", search_element);
    }

    return 0;
}
