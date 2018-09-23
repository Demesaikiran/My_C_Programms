#include<stdio.h>
#include<string.h>
int main(int argc, char *a[])
{
	int l1,l2,count=0,mcount=0,i,j;
	char n1[100],n2[100];
	
	scanf("%s",n1);
	scanf("%s",n2);
	
	l1=strlen(n1);
	l2=strlen(n2);
	
	
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l1;j++)
			{
				if(n1[i]==n2[j])
				{
					count++;
					break;
				}
				else
					continue;
			}
		}
		if(count==l1)
			mcount=1;
		else
			mcount=l1-count;
		
	}
	
	
	else if(l1<l2)
	{	
		mcount=l2-l1;
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l2;j++)
			{
				if(n1[i]==n2[j])
				{
					count++;
					continue;
				}
				else
					continue;
			}
		}
		
		if(count<l1)
			mcount=mcount+(l1-count);
				
	}
	
	
	else
	{
		mcount=l1-l2;
		for(i=0;i<l2;i++)
		{
			for(j=0;j<l1;j++)
			{
				if(n2[i]==n1[j])
				{
					count++;
					continue;
				}
				else
					continue;
			}
		}
		if(count<l2)
			mcount=mcount+(l2-count);
	}
	
	printf("%d",mcount);
}
