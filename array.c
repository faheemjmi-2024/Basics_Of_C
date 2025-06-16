/*#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter integers a = ");
    scanf("%d", &a); 

    printf("Enter integer b = ");
    scanf("%d", &b);

    printf("Enter integer c = ");
    scanf("%d", &c);

    d = a;
    c = b;
    b = c;
    a = d;

    printf("");
    return 0;
}*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, smallest;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = arr[0];

    // Loop to find largest and smallest
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the results
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
