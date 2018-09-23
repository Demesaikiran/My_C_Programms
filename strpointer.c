#include<stdio.h>
#include<string.h>
void swap(char(*)[30],char(*)[30]);
void display(char(*)[30],int);
int main()
{
	char names[15][30]={
				"sai",
				"kiran",
				"amma",
				"nanna",
				"vamshi",
				"lalith",
				"maths",
				"cprogram",
				"book",
				"pen",
				"thatha",
				"nani",
				"chitti",
				"spects",
				"bangaram"
				},i;
	display(names,15);
	for(i=0;i<15;i++)
	printf("finally names in alphabetical order:%s",names[i]);
	
}
void display(char (*names)[30],int n)
{	int i,j;
	for(i=0;i<n;i++)
	  for(j=0;j<30;j++)
	        if((names[i][j])>(names[i+1][j]))
		 swap(&names[i],&names[i+1]);
		 for(i=0;i<n;i++)
		 printf("finally names in alphabetical order:%s",names[i]);
	
}
void swap(char(*names1)[30],char(*names2)[30])
{	int i;
	char temp;
	temp=names1;
	names1=names2;
	names2=temp;
	for(i=0;i<15;i++)
	 printf("finally names in alphabetical order%s%s",names1[i],names2[i]);
}
					
	
