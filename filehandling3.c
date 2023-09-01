

#include <stdio.h>

int main()

{
	
int val;

FILE *fptr;

fptr = fopen ("C:\\gurpinder\\arms.txt","w");	

if(fptr == NULL)

{
printf("file type invalid!");

}

printf("please enter the val: ");

scanf("%d",&val);

fclose(fptr);

return 0;
}


		

