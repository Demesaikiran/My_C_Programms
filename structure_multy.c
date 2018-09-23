#include<stdio.h>
struct student
{
	int a;
	int b;
};

int multiply(struct student *s)
{
	int res;
	
	for(i=0;i<2;i++)
	{
		
	return res;
}

int main()
{
	struct student s[2];
	
	
	int res,i;
	
	for(i=0;i<2;i++)
	{
		printf("Enter the values of structure s"i+1);
		scanf("%d%d",&s[i].a,s[i].b);
	}
	
	res=multiply(&s1,&s2);
	printf("result= %d",res);
}
	
