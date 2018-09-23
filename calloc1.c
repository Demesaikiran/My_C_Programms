#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,n=5;
	arr=(int*)calloc(n,sizeof(int));
	if(arr=NULL)
		printf("No MEmory in array");
	else
	{
		for(i=0;i<n;i++)
		printf("%d",*(arr+i));
	}
	
	
}