#include<stdio.h>
int *sendArray(int len)
{
	static int arr[10],i;
	printf("Enter elements :");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	return(arr);
}

int main()
{
	int *p;
	int i,len;

	printf("Enter the length of array req : ");
	scanf("%d",&len);

	p=sendArray(len);
	for(i=0;i<len;i++)
	{
		printf("*(p+%d) element : %d \n",i,*(p+i));
	}
}