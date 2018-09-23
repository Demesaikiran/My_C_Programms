#include<stdio.h>
int main()
{
	int n,a[50],i,m,min;
	printf("------------------------------------------------------------------------\n");
	printf("THIS PROGRAMM IS TO FIND MINIMUM OF GIVEN LIST\n");
	printf("Enter the value of n : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(m=0;m<n;m++)
	{
		if(min>a[i])
			min=a[i];
	}
	printf("Minimum of given elements : %d",min);
}
