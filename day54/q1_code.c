#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalSum = 0;

    // Sum from 1 to n
    for(int i = 1; i <= n; i++) {
        totalSum += i;
    }

    int leftSum = 0;
    int pivot = -1;

    // Find pivot x
    for(int x = 1; x <= n; x++) {
        leftSum += x;              // sum from 1 to x
        int rightSum = totalSum - (x - 1) * x / 2;  // sum from x to n

        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);
    return 0;
}
