#include<stdio.h>
int main()
{
int radius;
float area,circum;
printf("Enter radius");
scanf("%d",&radius);
circum=2*3.14*radius;
printf("circumfrence of circle is %f\n",circum);
area=3.14*radius*radius;
printf("Area %f",area);
return 0;
}
