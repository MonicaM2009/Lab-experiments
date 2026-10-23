#include<stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("\nEnter a,b,c values:");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
printf("\nthe sum of a,b,c,is %d",sum);
avg=(float)sum/3;
printf("\nthe avg of a,b,c is %.2f",avg);

    return 0;
}