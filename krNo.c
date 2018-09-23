#include<stdio.h>
#include<stdlib.h>
int fact(int num);
int main()
{
	system("clear");
	int i,j,d,sum,digit;
	
	for(i=0;i<=10000;i++)
	{
		j=i;
		sum=0;
		for(d=0;d<=i;d++)
		{
			digit=i%10;
			sum=sum+fact(digit);
			i=i/10;
			if(sum==j)
				printf("\n%d is Krishnamurthys number\n",j);
		}
		i=j;
	}
}

int fact(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return(fact);
}
		
