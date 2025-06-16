#include <stdio.h>
int main(){

    float a;
    printf("Enter the acceleration : ");
    scanf("%f", &a);

    float u;
    printf("Enter the initial velocity : ");
    scanf("%f", &u);

    float t;
    printf("Enter the time : ");
    scanf("%f", &t);

    float V;

    V = u + a * t;

    printf("The final velocity is = %f", V);

    return 0;
}