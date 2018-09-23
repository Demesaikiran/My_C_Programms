#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	int len1,len2,n,i,j;
	
	puts("Enter the main string \n");
	gets(str1);
	
	len1=strlen(str1);
	
	printf("CAUTION: Enter the substrin with space at the intitial\n");
	puts("Enter the sub string \n");
	gets(str2);
	
	len2=strlen(str2);
	
	printf("Enter the position where string is to insert :");
	scanf("%d",&n);
	
	for(i=len1;i<n;i--)
		str1[i+len2]=str1[i];
	
	for(i=n,j=0;i<n+len2;i++)
	{
		str1[i]=str2[j];
		j++;
	}
	
	
	
	printf("After inserting the string is %s ",str1);
}
