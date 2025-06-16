// Write a C program to calculate sum and average of two int numbers.

#include<stdio.h>

int main() 
{
    int x, y;
    int sum = 0.0, avg = 0.0;
    
    printf("value of x =");
    scanf("%d", &x);

    printf("value of y =");
    scanf("%d", &y);

    sum=x+y;
    avg=sum/2;

    printf("\n Sum of%d and %d is = %d",x,y,sum);
    printf("\n Average of%d and%d is =%d \n",x,y,avg);


    return 0;
}