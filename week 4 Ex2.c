#include<stdio.h>
int main()
{
int a,b,c,big;
printf("\n enter a,b,c values:");
scanf("%d %d %d",&a,&b,&c);
big=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("largest number is %d",big);

    return 0;
}