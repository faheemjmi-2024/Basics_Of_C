#include <stdio.h>

int main() {
    int marks[5], i;
    float total = 0, average;
    char grade;

    // Input marks
    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validation
        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Please enter marks between 0 and 100.\n");
            return 1;
        }

        total += marks[i];
    }

    // Calculate average
    average = total / 5;

    // Use if-else if ladder to assign grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';

    // Output
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}
