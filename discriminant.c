#include<stdio.h>
int main()
{	float a,b,c,r1,r2,d;
	printf("enter the values of a,band c \n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d==0)
	{printf("roots are equal");
	
	d=-b/(2*a);
	}
else if (d<0);
	{printf("roots  is imaginary");
	}
	else (d>0);
	{printf("roots is real");
	r1=(-b+sqrt(d)/(2*a);
    r2=(-b-sqrt(d)/(2*a);
	printf("roots are %f and %f,r1,r2");
}
	}
}
