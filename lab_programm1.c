#include<stdio.h>
#include<math.h>
int fact(int n)
{
	int i,result=1;
	for(i=0;i<=n;i++)
	{
		result=result*i;
	}	
	return result;
}
int main()
{
	int i,n,flag=-1;
	float res=0,result=0;
	printf("The value of n is:");
	scanf("%d",&n);
	
	for(i=0;i<=10;i=i+2)
	{	
		res=pow(n,i)/fact(i);
		res=res*flag;
		result=result+res;
	}
	printf("Sum is given by %f\n",result);
}

		
