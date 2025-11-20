#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    int total_sum = 0;
    for(int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    
    int left_sum = 0;
    for(int i = 0; i < n; i++) {
        total_sum -= arr[i]; 
        
        if(left_sum == total_sum) {
            printf("%d\n", i); 
            return 0;
        }
        
        left_sum += arr[i]; 
    }
    
    printf("-1\n"); 
    return 0;
}