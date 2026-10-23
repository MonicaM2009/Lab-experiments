#include<stdio.h>
#include<math.h>
int main()
{
float Number,root_value;
printf("\nenter a number:");
scanf("%f",&Number);
root_value=sqrt(Number);
printf("\n the square root value of %.2f is %.2f",Number,root_value);
    return 0;
}