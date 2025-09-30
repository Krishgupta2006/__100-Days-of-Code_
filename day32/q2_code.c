#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    long long n;
    int digit;
    
    // An array to store the frequency of each digit from 0 to 9
    int freq[10] = {0}; 
    
    int max_freq = 0;
    int most_frequent_digit = 0;

    // Get the integer from the user
    printf("Enter an integer number: ");
    scanf("%lld", &n);

    // Handle the case of a negative number by taking its absolute value
    long long temp = llabs(n);

    // If the input is 0, the most frequent digit is 0
    if (temp == 0) {
        printf("The most frequent digit is 0.\n");
        return 0;
    }
    
    // Extract each digit and update the frequency array
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }

    // Print the result
    printf("The most frequent digit is %d, which appears %d times.\n", most_frequent_digit, max_freq);

    return 0;
}
