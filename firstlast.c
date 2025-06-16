#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    // Input from user
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Check if the number is four digits
    if (number < 1000 || number > 9999) {
        printf("Invalid input! Please enter a four-digit number.\n");
        return 1;
    }

    // Get the last digit
    lastDigit = number % 10;

    // Get the first digit
    firstDigit = number / 1000;

    // Display the result
    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);

    return 0;
}
