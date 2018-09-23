#include<stdio.h>
int main()
{
	int num,rem=0,digit=0,value,temp;
	printf("\n\n\tnum is :");
	scanf("%d",&num);
	printf("\n\n\t");
	printf("%d   ",rem);
	temp=num;
	while(temp>0)
	{
		while(num>0)
		{
			value = num%10;
			digit=digit*10+value;
			num=num/10;
		}
		
		while(digit>0)
		{
			rem=digit%10;
			printf("%d   ",rem);
			digit=digit/10;
		}
		temp=temp/10;
		temp=num;
		printf("\n\t");
		temp;
	}
	printf("\n\n");
}
