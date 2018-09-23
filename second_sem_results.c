#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("clear");
	int a,b,c,d,e,f,g,h,i,j;
	float num,sum=0;
	char sub[][50]={"Engineering_physics","Mathematics-II","Matheamtics-III","CP","Graphics","Chemistry_lab","Physics_lab","CP_lab"};
	
	printf("\n\n\n-----------------------------------------------CHECK THE 2nd SEM RESULT---------------------------------------------------------\n\n\n\n");
        
	printf("BELOW GIVEN THE GRADE POINTS WITHRESPECT TO GRADE U GOT FOR INDIVIDUAL SUBJECT\n");
	printf("------------------------------------------------------------------------------\n\n\n");

	printf("LETTER GRADE         GRADE POINT\n");
	printf("-------------        -----------\n");
	printf("O(Outstanding) ----->    10\n");
	printf("A+(Excellent)  ----->     9\n");
	printf("A(Very Good)   ----->     8\n");
	printf("B+(Good)       ----->     7\n");
	printf("B(Average)     ----->     6\n");
	printf("C(Pass)        ----->     5\n");
	printf("F(Fail)        ----->     4\n\n\n\n");

	printf("Enter the grade point got in the Engineering Physics-II :");
	scanf("%d",&a);
	printf("\n\nEnter the grade point got in the Mathematics-II :");
	scanf("%d",&b);
	printf("\n\nEnter the grade point got in the Mathematics-III :");
	scanf("%d",&c);
	printf("\n\nEnter the grade point got in the Computer Programming in C :");
	scanf("%d",&d);
	printf("\n\nEnter the grade point got in the Engineering Graphics :");
	scanf("%d",&e);
	printf("\n\nEnter the grade point got in the Engineering Chemistry Lab :");
	scanf("%d",&f);
	printf("\n\nEnter the grade point got in the Physics Lab :");
	scanf("%d",&g);
	printf("\n\nEnter the grade point got in the Computer programming in C Lab :");
	scanf("%d",&h);
	printf("\n\n");

	for(i=0;i<8;i++)
	{
		printf("Enter credits of %s :",sub[i]);
		scanf("%d",&j);
		sum=sum+j;
		printf("\n\n");
	}
	if(sum!=24)
		printf("You are failed in this exam");
	if(sum=24)
	{
		
		num=((a*3)+(b*4)+(c*4)+(d*3)+(e*4)+(f*2)+(g*2)+(h*2))/sum;
		printf("\n\n\nYou got the G.P.A of %6f in this semister\n\n\n",num);
	}
	if(a||b||c||d||e||f||g||h<7|6)
	{
		printf("Improve the subjects in which you got the less grade points\n\n\nAll the best for the next semester exam\n\n\nGo conceptual but be in a practical way\n\n\n");
	}
}	

