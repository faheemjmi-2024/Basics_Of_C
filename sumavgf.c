// Write a C program to calculate sum and average of two float numbers.

#include<stdio.h>

int main() 
{
    float x, y;
    float sum = 0.0, avg = 0.0;
    
    printf("value of x =");
    scanf("%f", &x);

    printf("value of y =");
    scanf("%f", &y);

    sum=x+y;
    avg=sum/2;

    printf("\n Sum of%f and %f is = %f",x,y,sum);
    printf("\n Average of%f and%f is =%f \n",x,y,avg);
    
    return 0;
}