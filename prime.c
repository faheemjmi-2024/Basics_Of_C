#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}