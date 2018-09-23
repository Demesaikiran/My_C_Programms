#include<stdio.h>
int main()
{
	int array2[10],i,a,j;
	char array1[10];
	
	printf("Enter how many alphabets you want to enter :");
	scanf("%d",&a);
	
	
	for(i=0;i<a;i++)
		scanf("%c%d",&array1[i],&array2[i]);
		
		
	
	printf("\n\n");
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<array2[i];j++)
			printf("%c",array1[i]);
	}
}
