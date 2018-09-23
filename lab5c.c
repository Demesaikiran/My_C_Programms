#include<stdio.h>
#include<stdlib.h>
float ncr(int n,int r)
{
	int y,res;
	if((r==0)||(n==0)||(n<=r))
	{
		y=1;
		return y;
	}
	else
		res=ncr(n-1,r-1)+ncr(n-1,r);
	return res;
}
int main()
{
	system("clear");
	int n,r,y;
	printf("Enter the values of n and r :");
	scanf("%d%d",&n,&r);
	printf("The value of ncr is %f",ncr(n,r));
	return 0;
}
