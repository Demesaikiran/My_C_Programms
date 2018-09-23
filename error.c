#include<stdio.h>
int main()
{
	int a=1,b,c;
	a=a;
	b=++a;
	c=a++;
	printf("%d,%d,%d",a,b,c);
}
