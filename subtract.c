#include<stdio.h>

int main()
{
    int x, y;
    int diff=0;

    printf("value of  x =");
    scanf("%d",&x);

    printf("value of y =");
    scanf("%d",&y);

    diff=x-y;  

    printf("\n Difference of %d and %d is =%d",x,y,diff);
    if(diff==0)
           printf("\n the number are equal\n");
    else
    {
        if(diff>0)
             printf("\n First number is bigger\n");
        else
        printf("\n Second number is  bigger\n");
    
    }
    return 0;
}