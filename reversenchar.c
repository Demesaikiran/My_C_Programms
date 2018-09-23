#include<stdio.h>
#include<stdlib.h>

int main(int argc,int* argv[])
{
	FILE *fp;
	int count=0,n;
	int c,i,j;
	char a[50],s[50];
	fp=fopen(argv[1],"w+");
	
	fputs("This is C program to update",fp);
	fseek(fp,0,SEEK_SET);
	n=atoi(argv[2]);
	
	while(count<=n&&(!feof(fp)))
	{
		a[count]=getc(fp);
		count++;
	}
	
	a[count]='\0';
	
	for(i=count-1,j=0;i>=0;i--,j++)
		a[j]=a[i];
	
	a[j]='\0';
	fseek(fp,0,SEEK_SET);
	fputs(s,fp);
	fclose(fp);
}
