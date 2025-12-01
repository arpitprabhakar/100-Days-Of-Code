//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int number, digit, i;
    int count[10] = {0}; // Array to store count of each digit (0-9)

    printf("Enter an integer number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count occurrences of each digit
    if (number == 0) {
        count[0]++;
    } else {
        while (number > 0) {
            digit = number % 10;
            count[digit]++;
            number /= 10;
        }
    }

    // Find the digit with the maximum count
    int max_count = count[0];
    int most_frequent_digit = 0;
    for (i = 1; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", most_frequent_digit, max_count);
    
    return 0;
}