#include<stdio.h>
int main()
{
int a,b,c,d,max,min;
printf("\nenter the value of a,b,c,d:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("\n a=%d is the max",a);
else if(b>c && b>d)
printf("\n b=%d is the max",b);
else if(c>d)
printf("\n c=%d is the max",c);
else
printf("\n d=%d is the max",d);

if(a<b && a<c && a<d)
printf("\n a=%d is the min",a);
else if(b<c && b<d)
printf("\n b=%d is the min",b);
else if(c<d)
printf("\n c=%d is the min",c);
else
printf("\n d=%d is the min",d);
    return 0;
}