#include<stdio.h>

int main(){
   int a, b;
   printf("Enter integers a = ");
   scanf("%d", &a);

   printf("Enter integers b = ");
   scanf("%d", &b);

    a= a+b-a;
    b= b+a-b;

   printf("After swapping: a = %d, b = %d \n", a, b);
    
    return 0;
}
