#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,D,real,imag;//D is discriminant 
printf("\n enter the values of a,b,c");
scanf("%f %f %f",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("\n the roots are real and distint");
    printf("\n root1 is %.2f",r1);
    printf("\n root2 is %.2f",r2);
}    
else if(D=0)
{ 
    r1=-b/(2*a);
    printf("\n the roots are real and equal");
    printf("\n root 1=root 2 =%.2f",r1);
}    
else  
 {   real=-b/(2*a);
    imag=sqrt(-D)/(2*a);
    printf("\n the roots are complex");
    printf("\n real root is %.2f",real);
    printf("\n imaginary root is %.2f",imag);  
 }   
    return 0;
}