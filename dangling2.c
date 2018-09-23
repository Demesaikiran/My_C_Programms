#include<stdio.h>

void fun(int *ptr)
{
	
	{
		int x=10;
		ptr=&x;
	}
	printf("%d",*ptr);
}
int main()
{
	int *ptr;
	
	fun((int*)ptr);
}
