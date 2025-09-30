#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int mid;

    // Loop until the search interval is empty (low > high)
    while (low <= high) {
        // Calculate the middle index
        mid = low + (high - low) / 2;

        // Check if the target is found at the middle
        if (arr[mid] == target) {
            return mid; // Return the index of the found element
        } 
        // If the target is greater, search the right half
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If the target is smaller, search the left half
        else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    int n, i, search_element, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // The array must be sorted for binary search to work
    int arr[n];
    printf("Enter %d integers in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &search_element);

    // Call the binary search function
    result = binarySearch(arr, n, search_element);

    // Print the final result
    if (result != -1) {
        printf("Element %d found at index %d.\n", search_element, result);
    } else {
        printf("Element %d not found in the array.\n", search_element);
    }

    return 0;
}
