#include <stdio.h>
int power(int n1, int n2);
int main() {
	int base, a , result;
	printf("Enter base number nd power: ");
	scanf("%d %d",&base,&a);
	result=power(base,a);
	printf(" %d",result);
	return 0;
	
}
   int power(int base, int a) {
   	if(a !=0)
   	return (base * power(base,a-1));
   	else
   	return 1;
   }
