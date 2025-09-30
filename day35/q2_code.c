#include <stdio.h>

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // In case k is larger than array size
    int temp[n];

    // Copy the last k elements to the beginning of temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first n-k elements after that
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating to the right by %d positions:\n", k);
    printArray(arr, n);

    return 0;
}
