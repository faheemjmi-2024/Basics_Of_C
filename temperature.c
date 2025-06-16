#include <stdio.h>

int main()
{
    int  x;
    scanf("%d",&x );
    if (x<10)
    {
        printf("Cold");
    }
    else if(x>10&&x<30) 
    {
        printf("Moderate");
    }
    else if (x>30)
    {
        printf("Hot");
    }
    return 0;

}