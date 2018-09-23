#include<stdio.h>
int main()
{
	int i,n,j,count=0;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			count++;
			
		}
		if(count==i-1)
		{
			printf("%d is a prime number\n",i);
		}
	}
}	

				
