#include<stdio.h>
int main()
{
float A,B,C,D,E,F,G,J,resultA,resultB,resultC,resultD_J;
float i;
    printf("\n enter A,B,C,D,E,F,G,i values:");
    scanf("%f %f %f %f %f %f %f %f",&A,&B,&C,&D,&E,&F,&G,&i);
//A)A+B*C+(D*E)+F*G
resultA = A+(B*C)+(D*E)+(F*G);
printf("\n the resultA is %.2f of A",resultA); 
//B)A/B*C-B+A*D/3
resultB=A/B*C-B+A*D/3;
printf("\n the resultB is %.2f of B",resultB);
//C)A++ + B - --A
resultC=A+++B---A;
printf("\n the resultC is %.2f of C",resultC);
//D)J= (i++) + (++i)
resultD_J=(i++) + (++i);
printf("\n the resultD is %.2f of J",resultD_J);
    return 0;
}