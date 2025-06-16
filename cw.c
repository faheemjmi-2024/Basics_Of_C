#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Space before %c to avoid newline issues

    // Check if it's an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        }
        else {
            printf("%c is a consonant.\n", ch);
        }
    }
    else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
