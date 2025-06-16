// Write a C program to calculate the perimeter (=4*side) and area (=side*side) of a square using the given formula.


#include<stdio.h>

int main(){

    int len, peri = 0, area = 0;
    printf("Enter the lenght of the side of the square = \t");
    scanf("%d", &len);
    peri = len * 4;
    area = len * len;
    printf("\n The perimeter of square is = %d", peri);
    printf("\n The area of the square is = %d \n", area);
    

    return 0;
}