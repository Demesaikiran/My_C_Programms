#include<stdio.h>
#include<stdlib.h>
void roman(int num)
{
	int i,qut,rem;
	
	printf("\n\n\nThe Roman Numeral code for the given number is given as:");
	
	while(num!=0)
	{
		
		if(1<=num && num<4)
		{
			qut=num;
			for(i=1;i<=qut;i++)
				printf("I");
			num=num/10;
		}
		if(num==4)
		{
			printf("IV");
			num=num/10;
		}
		if(5<=num && num<9)
		{
			qut=num-5;
			printf("V");
			for(i=1;i<=qut;i++)
			{
				printf("I");
			}
			num=num/10;
		}
		
		if(num==9)
		{
			num=num/10;
			printf("IX");
		}	
			
		if(10<=num && num<40)
		{
			qut=num/10;
			for(i=1;i<=qut;i++)
			{
				printf("X");
			}
			num=num%10;
		}
		if(40<=num && num<50)
		{
			printf("XL");
			num=num%10;
		}
		if(50<=num && num<90)
		{
			qut=(num/10)-5;
			printf("L");
			for(i=1;i<=qut;i++)
			{
				printf("X");
			}
			num=num%10;
		}
		if(90<=num && num<100)
		{
			printf("XC");
			num=num%10;
		}
		if(100<=num && num<400)
		{
			qut=num/100;
			for(i=1;i<=qut;i++)
			{
				printf("C");
			}
			num=num%100;
		}
		if(400<=num && num<500)
		{
			printf("CD");
			num=num%100;
		}
		if(500<=num && num<900)
		{
			qut=(num/100)-5;
			printf("D");
			for(i=1;i<=qut;i++)
			{
				printf("C");
			}
			num=num%100;
		}
		if(900<=num && num<1000)
		{
			printf("CM");
			num=num%100;
		}
		if(num>=1000)
		{
			qut=num/1000;
			for(i=1;i<=qut;i++)
			{
				printf("M");
			}
			num=num%1000;
		}
	}
	printf("\n\n\n");
}

int main()
{
	system("clear");
	printf("\n\n\n");
	int num;
	printf("Enter the number to convert it into Roman number:");
	scanf("%d",&num);
	roman(num);
}
		
	
