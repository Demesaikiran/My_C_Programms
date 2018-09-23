#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n value:");
	scanf("%d",&n); 
	printf("The prime numbers are:");
	for(i=2;i<=n;i++)
	{	j=2; 
	 	while(j<=i-1)
		{   if(i%j==0)
		    break;
		    j++;
		}
		if(j==i)
		  printf(" %d",i);
	}
	 
} 
