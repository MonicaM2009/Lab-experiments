#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,total;//s is subject marks
float avg;
printf("\n enter marks of each subject s1,s2,s3,s4,s5:");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
printf("the total marks are %d",total);
avg=(float)total/5;
printf("\nthe average is %.2f",avg);
    return 0;
}