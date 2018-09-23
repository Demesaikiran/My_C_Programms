#include<stdio.h>
int main()
{
	int *ptr;
	{
		int x=10;
		ptr=&x;
		//printf("The Address of x is %p and value is %d",ptr,x);
	}

	printf("The address of the X is %p",ptr);
}
