#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;//s is sum
    printf("\n enter a,b,c sides values:");
    scanf("%f %f %f",&a,&b,&c);
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("\nthe area of the triangle using heron's formula is %.2f",area);
    return 0;
}