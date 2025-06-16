#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Input number of terms
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    // Handle invalid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
