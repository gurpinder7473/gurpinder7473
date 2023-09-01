#include <stdio.h>
int main(){
	FILE *fp;
	fp = fopen("arms.txt","w");
	fprintf(fp,"Hello file by fprintf...\n");
	fclose(fp);
}
