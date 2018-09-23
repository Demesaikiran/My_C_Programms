#include<stdio.h>
int main()
{
	int limit,row,col,i,m,k,j,r;
	
	printf("Please enter a number between 1 and 9: ");
	scanf("%d",&limit);

	for(row=0;row<=limit;row++)
	{
		for(col=0;col<=limit;col++)
			if(row>col)
				printf("  ");
			else
				printf("* * ");
		printf("\n");
	}
	m=limit-1;
	for(i=0;i<=limit;i++)
	{
		printf("  ");
		for(j=0;j<=m*2;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("* ");
		}
		for(r=1;r<=i;r++)
			printf("* ");
		m--;
		printf("\n");
	}
}

