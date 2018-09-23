#include<stdio.h>
int nFact(int n)
{
	int i,fact1=1;
	for(i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	return fact1;
}
int Fact(int n, int r)
{
	int i,fact2=1,v;
	v=n-r;
	for(i=1;i<=v;i++)
	{
		fact2=fact2*i;
	}
	return fact2;
}
int rFact(int r)
{
	int i,fact3=1;
	for(i=1;i<=r;i++)
	{
		fact3=fact3*i;
	}
	return fact3;
}
int main()
{
	int a,b,c,n,r;
	float combi;
	printf("\n\n\tEnter the value of n :");
	scanf("%d",&n);
	printf("\n\tEnter the value of r :");
	scanf("%d",&r);
	
	a = nFact(n);
	b = Fact(n,r);
	c = rFact(r);
	
	printf("\n\tThe value of Ncr with N as %d and r as %d is given  by :\n",n,r);
	
	combi = (a)/(b*c);

	printf("\tThe value of Ncr is %f\n\n\n",combi);
}
