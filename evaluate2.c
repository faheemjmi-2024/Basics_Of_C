#include<stdio.h>
int main()
{
    float u;
    printf("Enter the value of initial velocity :");
    scanf("%f",&u);

    float t;
    printf("Enter the value of Time :");
    scanf("%f",&t);

    float a;
    printf("Enter the value of acceleration : ");
    scanf("%f",&a);

    float S;

    S = u*t + 1/2*a*(t*t);

    printf("The value of displacement is %f: ",S);

    return 0;
}