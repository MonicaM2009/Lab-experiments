#include<stdio.h>
int main()
{
int units;
float bill,rate;
printf("\n enter units consumed:");
scanf("%d",&units);
if(units <= 100)
rate = 1.50;
else if(units <= 200)
rate = 2.50;
else if(units <= 500)
rate = 4.00;
else 
rate = 6.00;
bill = units*rate;
printf("\n the units consumed is %d",units);
printf("\nthe rate is Rs.%.2f",rate);
printf("\n the total bill is %.2f",bill);
return 0;
}