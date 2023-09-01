#include<stdio.h>
int main()
{
	int i,n,a[5];
	printf("enter no of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("elements-%d",i);
		scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
for(i=n-1;i>=0;i--)
{
	printf("%d\n",a[i]);
}
return 0;
}
