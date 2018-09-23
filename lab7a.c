#include<stdio.h>
#include<stdlib.h>
int smallest(int a[],int n)
{
	int b,copy,i;
	
	if(a[0]<a[1])
		b=a[0];
	else
		b=a[1];
	copy=b;
	for(i=2;i<=n;i++)
	{
		if(a[i]<b)
		{
			copy=a[i];
		}
	}
	return copy;
}
int largest(int a[],int n)
{
	int b,i,copy;
	
	if(a[0]>a[1])
		b=a[0];
	else
		b=a[1];
	copy=b;
	for(i=2;i<=n;i++)
	{
		if(a[i]>b)
		{
			copy=a[i];
		}
	}
	return copy;
}
int sum(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
float average(int a[],int n)
{
	int i;
	float num,avg;
	num=sum(a,n);
	avg=num/n;
	return avg;
}
int main()
{
	system("clear");
	int a[20],n,i,num;
	printf("\n\n\n");
	printf("S.no\tMenu of operations\tvalue in deciaml\n");
	printf(" 1  \t  Find Smallest   \t       1\n");
	printf(" 2  \t  Find Largest    \t       2\n");
	printf(" 3  \t       Sum        \t       3\n");
	printf(" 4  \t    Average       \t       4\n\n\n");
	printf("Enter the number of numbers to check:");
	scanf("%d",&n);
	printf("\n\nEnter the numbers to calculate the above operations:");
	
	for(i=0;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n\n\nEnter which operation u want to do as mentioned above:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("The smallest number from ur info is %d",smallest(a,n));
			break;
		case 2:printf("The largest number from ur info is %d",largest(a,n));
			break;
		case 3:printf("The sum of all the given numbers is given by:%d",sum(a,n));
			break;
		case 4:printf("The average of all the given numbers is:%f",average(a,n));
			break;
		default :printf("\n\n\nAn invalid choice is entered");
			break;
	}
}
		
		
	
	
