#include<stdio.h>

int main()
{
	float a,b,c,d,e,total;
	printf("Enter no for english");
	scanf("%f",&a);
	
	printf("Enter no for mathematics");
	scanf("%f",&b);
	
	printf("Enter no for physics");
	scanf("%f,&c");
	
	printf("Enter no for chemistry");
	scanf("%f,&d");
	
	printf("Enter no for physical education");
	scanf("%f,&e");
	total=a+b+c+d+e;
	printf("%f",total);
}
