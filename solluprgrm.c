#include<stdio.h>
#include<string.h>
int main()
{
	char names[3];
	int i,j;
	printf("Enter some name to get permutations");
	scanf("%s",names);
	for(i=0;i<3;i++)
	{
		printf("%c",names[i]);
	}
}
	
