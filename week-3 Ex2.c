#include<stdio.h>
#include<math.h>

int main()
{
float principal,rate,time,CI,amount;//principal is prncipal amount,rate is rate interest,CI IS Compund interest 
printf("\n enter principal,rate,time");
scanf("%f %f %f",&principal,&rate,&time);
amount=principal*pow(1+(rate/100),time);
CI=amount - principal;
printf("\n the compound interest is %.2f",CI);
printf("\n the total amount is %.2f",amount);
    return 0;
}