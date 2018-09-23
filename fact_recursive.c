#include<stdio.h>
int fact(int n)
{
	int f;
	if((n==0)||(n==1))
		return(n);
	else
		f=n*fact(n-1);
	return(f);
}
void main()
{
	printf("enter the number :");
	scanf("%d",&n);
or
int n;
printf("factoria of number%d",fact(n));
}
