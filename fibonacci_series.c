#include<stdio.h>
int main()
{
	int fib1,fib2,fib3=0;
	printf("Enter fib1 and fib2 : ");
	scanf("%d%d",&fib1,&fib2);
	printf("\n\n%d,%d,",fib1,fib2);
	while(fib3<100)
	{
		fib3 = fib1 + fib2;
		fib1=fib2;
		fib2=fib3;
		printf("%d,",fib3);
	}
	printf("\n\n");
}
	
