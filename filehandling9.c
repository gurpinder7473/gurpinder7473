#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char text[300];


fp=fopen("myfile2.txt","r");
printf("%s",fgets(text,200,fp));

fclose(fp);

}
