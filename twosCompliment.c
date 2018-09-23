#include<stdio.h>
void twosCompliment(int a[10],int n)
{
	int i,h=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			a[i]=1;
		else
			a[i]=0;
	}
	
	printf("The Ones Compliment of the given number is :");

	for(i=0;i<n;i++)
		printf("%d",a[i]);


	for(i=n-1;i>=0;i--)
	{
		a[i]=a[i]+h;
		
		if(a[i]==1)
		{
			h=0;
			break;
		}
		else
		{
			a[i]=a[i]-2;
			h=1;
		}
	}
	
	printf("\n\nThe Twos Compliment of the given number is :");

	if(h==1)
		printf("%d",h);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}

int main()
{
	int i,n,a[10];
	
	printf("Number of bits of the binary number :");
	scanf("%d",&n);

	printf("Enter the Binary number to convert into the Twos compliment of it :");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	twosCompliment(a,n);
}
