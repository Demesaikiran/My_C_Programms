#include<stdio.h>

int CountNum(int a[],int n,int num)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
			count++;
		else
			continue;
	}
	return count;
}

int CountMax(int b[])
{
	int i,max=0;
	for(i=0;i<10;i++)
	{
		if(max<b[i])
			max=b[i];
		else
			continue;
	}
	return max;
}


int main()
{
	int a[1000],b[1000],max,i,j,len;
	
	printf("Enter the length of the array-a : ");
	scanf("%d",&len);
	
	printf("Enter the elements of the array-a :");
	for(i=0;i<len;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
		b[i]=CountNum(a,len,i);
	
	
	for(i=0;i<3;i++)
	{
		max=CountMax(b);
		for(j=0;j<10;j++)
		{
			if(max==b[j])
			{
				printf("%d",j);
				b[j]=0;
				break;
			}
			else
				continue;
		}
	}
}
