#include<stdio.h>
#include <math.h>
int main ()
{
    float a;
    printf("Entre the value of acceleration : ");
    scanf("%f",&a);
    
    float b;
    printf("Enter the value of b : ");
    scanf("%f",&b);

    float c;
    printf("Enter the value of c : ");
    scanf("%f",&c);

    float T;
    T = (2*a)+sqrt(b)+(9*c);

    printf("The value of T is : %.2f",T);
    return 0;

}