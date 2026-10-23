#include<stdio.h>
int main()
{
float principal,rate,time,SI;//SI is simple interset 
//principal is principal amount rate is rate interest and tea is time 
printf("\n enter principal amount, rate(per annum),time(in years):");
scanf("%f %f %f",&principal,&rate,&time);
SI=(principal * rate * time)/100;
printf("\n the simple interest is %.2f",SI);
    return 0;
}