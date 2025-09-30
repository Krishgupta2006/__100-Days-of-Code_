#include <stdio.h>

int main() {
    int size1, size2, merged_size, i, j;

    // Get size and elements for the first array
    printf("Enter the number of elements for array 1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d integers for array 1:\n", size1);
    for (i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Get size and elements for the second array
    printf("\nEnter the number of elements for array 2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d integers for array 2:\n", size2);
    for (i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Calculate the size of the merged array
    merged_size = size1 + size2;
    int merged_arr[merged_size];

    // Copy elements from the first array to the merged array
    for (i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }

    // Copy elements from the second array to the merged array
    for (j = 0; j < size2; j++) {
        merged_arr[size1 + j] = arr2[j];
    }

    // Print the merged array
    printf("\nMerged array: ");
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}
