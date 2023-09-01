#include <stdio.h>
int main()

{
     int multNumbers (int a, int b);
     int n1, n2, mult;

     printf("Enters two numbers: ");
     scanf("%d%d", &n1, &n2) ;

     mult = multNumbers (n1, n2);
     printf ("mult = %d", mult) ;
     return 0;
}
int multNumbers(int a, int b)
{
     int result;
     result = a*b;
     return result;

}
