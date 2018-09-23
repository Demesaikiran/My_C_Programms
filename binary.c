#include<stdio.h>
int main()
{
	int i,least=0,max=8,arr[9],key,n,mid;
	printf("Binary search\n");
	printf("The numbers in the list");
	scanf("%d",&n);
	printf("Enter %d numbers",n);
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]); 
	printf("enter the number u wanted to search:");
	scanf("%d",&key);
	  
	 
	while(least<=max)
	{
	      mid = (least+max)/2;
	    if(key==arr[mid])
	    {  
	       printf("entered number is available\n");
	       printf("position is %d",mid);
	       break;
	    }
	    if(key>arr[mid])
	     least=mid+1;	  
	    if(key<arr[mid])
	      max=mid-1;
	    if(least>max)
	     printf("stop searching");        
            if(key>arr[max])
	    {    
		printf("hattt no number");
	        break;
	    }
	}
}

