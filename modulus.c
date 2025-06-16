// Write a C program to perform division and modulus operation of two numbers. 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;
    int divi=1, rem=1;
    
    printf(" Value of x = ");
    scanf("%d", &x);
    printf(" Value of y = ");
    scanf("%d", &y);
    if (y==0)
    {
        printf("\n Division is not Possible.");
        exit(0);
    }
    divi=x/y;
    rem=x%y;
    printf("\n %d Divide by %d is = %d ", x, y, divi);
    printf("\n Remainder of %d divided by %d is = %d\n", x, y, rem);

    
    
    return 0;
}