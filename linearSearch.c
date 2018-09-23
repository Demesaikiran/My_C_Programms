#include<stdio.h>
int main()
{
	int a[50],i,num,key;
	printf("-------------------------------------------------------------\n");
	printf("THIS PROGRAMM IS TO SEARCH A NUMBER\n");
	printf("Enter how many values to search :");
	scanf("%d",&num);
	printf("Enter the %d elements :\n",num);
	for(i=0;i<num;i++)
	{
		printf("Enter the %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search :");
	scanf("%d",&key);

	for(i=1;i<num;i++)
	{
		if(key==a[i])
		{
			printf("Position is %d\n",i+1);
			break;
		}
	}
	if(i>=num)
	{
		printf("Search Unsuccessfull");
	}
}
