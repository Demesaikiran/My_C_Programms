#include<stdio.h>
#include<stdlib.h>

int main(int argc[],char* argv[])
{
	FILE *fp;
	
	int count=0;
	char ch;

	
	fp=fopen(argv[1],"w");
	fputs("hello world i am deme saikiran",fp);
	
	while((ch=getc(fp))!=EOF)
	{
		if(ch==argv[2][0])
		{
			count++;
		}
	}
	
	printf("%d times it repeated ",count);
	
	fclose(fp);
}
