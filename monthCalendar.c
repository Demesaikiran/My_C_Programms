#include<stdio.h>
void printMonth(int startday,int days);
int main()
{
	printMonth(2,30);
	return 0;
}
void printMonth(int startday,int days)
{
	int weekday,daycount;
	printf("Sun  Mon  Tue  Wed  thu  Fri  Sat\n");
	printf("---  ---  ---  ---  ---  ---  ---\n");

	for(weekday=0;weekday<startday;weekday++)
		printf("    ");

	for(daycount=1;daycount<days;daycount++)
	{
		if(weekday>6)
		{
			printf("\n");
			weekday=1;
		}
		else
			weekday++;
		printf("%5d",daycount);
	}
	printf("\n---  ---  ---  ---  ---  ---  ---\n");
	return;
}
