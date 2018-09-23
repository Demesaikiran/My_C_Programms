#include<stdio.h>
struct Emp
{
	int idno;
	char name[20];
	float salary;
};

int main()
{
	struct Emp* ptr;
	

	scanf("%d",ptr->idno);
	scanf("%s",ptr->name[20]);
	scanf("%f",ptr->salary);

	printf("%d",ptr->idno);
}