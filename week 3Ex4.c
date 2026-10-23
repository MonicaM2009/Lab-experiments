#include<stdio.h>
int main()
{
float u,a,t,distance;
printf("\nenter velocity(u),acceleration(a),time(t):");
scanf("%f %f %f",&u,&a,&t);
distance = u*t+0.5*a*t*t;
printf("\n the distance travelled by an object is %.2f",distance);
    return 0;
}