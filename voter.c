/* Write a C program to  check whether a person is eligible to vote or not. The program should take the person's age
   and citizenship as input. A person is eligible to vote if they are atleast 18 years old and a citiizen */ 

#include <stdio.h>

int main(){
    int age;
    char Citizenship;
   
    printf("Enter age = ");
    scanf("%d", &age);

    if (age<0){
        printf("Invalid age! Age cannot be negative.\n");
        }else{
        printf("Are you a citizen? Y/N = ");
        scanf(" %c", &Citizenship);
        
        if (age >= 18 && (Citizenship  == 'Y' || Citizenship == 'y')){
            printf(" You are Eligible..\n");
        } else {
            printf("You are not Eligible....\n");
        }
        }

    

    return 0;
}