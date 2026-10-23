#include<stdio.h>
int main()
{
float F,C;
printf("\n enter the temperature in Fahrenheit:");
scanf("%f",&F);
C=(float)(F-32)*5/9;
printf("\n the temperature in Celsius is %.2f",C);
    return 0;
}