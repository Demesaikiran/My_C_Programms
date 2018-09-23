#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,n,len,pos;
	puts("Enter the string :");
	gets(str);
	
	printf("Enter the position where the characters are to be deleted :");
	scanf("%d",&pos);
	
	printf("Enter the no. of characters to be deleted :");
	scanf("%d",&n);
	
	len=strlen(str);
	
	for(i=pos+n;i<len;i++)
		str[i-n]=str[i];
		
	str[i-n]='\0';
	printf("The string is %s",str);
}
