#include<stdio.h>
int main()
{
	int a=10;
	int b=++a;
	int d=a;
	int c=a&&b;
	
	printf("%d %d %d %d",d,a,b,c);
}
