#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    printf("Enter the value of c : ");
    scanf("%d", &c);

    // Find the largest number
    if (a > b && a > c) {
        printf("A is the largest number.\n");
    }
    else if (b > a && b > c) {
        printf("B is the largest number.\n");
    }
    else {
        printf("C is the largest number.\n");
    }

    // Check even/odd status of each number
    if (a % 2 == 0)
        printf("A is Even.\n");
    else
        printf("A is Odd.\n");

    if (b % 2 == 0)
        printf("B is Even.\n");
    else
        printf("B is Odd.\n");

    if (c % 2 == 0)
        printf("C is Even.\n");
    else
        printf("C is Odd.\n");

    return 0;
}
