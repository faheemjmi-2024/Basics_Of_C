#include<stdio.h>

int main(){

    float radius , circumference = 0, area = 0;
    printf("Enter the radius of the side of the circle = \t");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;
    area =3.14 * radius * radius;

    printf("\nThe circumference of circle is = %f", circumference);
    printf("\nThe area of the circle is = %f \n", area);

    scanf("\n %c");


    return 0;
}