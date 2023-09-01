#include <stdio.h>
void main()
{
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr = fopen("file.txt","wt");
	if (fptr == NULL)
	{
		printf("file does not exists \n");
		return;
		
	}
	printf("enter the id\n");
	scanf("%d", &id);
	fprintf(fptr, "Id=%d\n",id);
	printf("enter the name \n");
	scanf("%s",name);
	fprintf(fptr,"name= %s\n",name);
	printf("enter the salary\n");
	scanf("%d",&salary);
	fprintf(fptr,"salary= %d.2d\n",salary);
	fclose(fptr);
}
