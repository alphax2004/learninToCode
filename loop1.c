#include <stdio.h>

int main() {
    int num, digit;
    int even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit of the number
    while (num != 0) {
        digit = num % 10;  // Get the last digit
        if (digit % 2 == 0) {
            even_sum += digit;
            even_count++;
        } else {
            odd_sum += digit;
            odd_count++;
        }
        num /= 10;  // Remove the last digit
    }

    // Output the results
    printf("Even digits count: %d, Sum of even digits: %d\n", even_count, even_sum);
    printf("Odd digits count: %d, Sum of odd digits: %d\n", odd_count, odd_sum);

    return 0;
}
