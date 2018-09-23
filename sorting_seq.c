#include<stdio.h>
int main()
{
	int num,list[20],i,j,copy=0,temp;
	
	printf("How many numbers you want to enter :");
	scanf("%d",&num);
	
	printf("Enter the list of numbers :");
	for(i=0;i<num;i++)
		scanf("%d",&list[i]);
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<(num-1-i);j++)
		{
			if(list[j]>copy)
				copy=j;
		}
		temp=list[num-1-i];
		list[num-1-i]=list[j];
		list[j]=temp;
	}
	for(i=0;i<num;i++)
		printf("%d",list[i]);
	
}
