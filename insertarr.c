#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Input 5 elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("The elements in the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
