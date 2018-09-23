#include<stdio.h>
int main()
{
	int a[15],i,noe,j,t;
	printf("Enter how many elements you want to give :");
	scanf("%d",&noe);			//This takes the no-of-elements(noe)to substitute in an array.
	
	for(i=0;i<noe;i++)
	{
		printf("enter %d no.",i+1);
		scanf("%d",&a[i]); 
	} 		//This takes the values from the user to keep in the array.
	for(i=0;i<noe;i++)
	{
		for(j=0;j<(noe);j++)		//Here starts the logic to get the required sorting.
		{
			if(a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}	
	}
	for(i=0;i<noe;i++)
	printf(" %d ",a[i]);
}
