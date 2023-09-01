#include<stdio.h>
#include<string.h>
void main(){
FILE *fp;


fp=fopen("file.txt","w");
fputs("my name is gurpinder sandhu",fp);

fclose(fp);

}
