int main()
{
	system("clear");
	int i,j,t,sum=0;
	float gpa;
	char subject[8],a,b,c,d,e,f,g,h;
	a="ELCSLAB";
	b="WORKSHOP";
	c="M1";
	d="EM";
	e="EC";
	f="EP-1";
	g="PCE";
	h="BEEE";
	
	//Here listen in the place of subjects you need to write the grades i.e, Aplus like that	
	
	printf("\n\n\tEnter the subjects order from a-h :");


	for(j=0;j<=7;j++)
		scanf("%c",subject[j]);
	
	for(i=0;i<=7;i++)
	{
		t = grade(subject[i]);
		if(subject[i] == a)
			sum=sum+t*2;
		else
			if(subject[i]==b)
				sum=sum+t*2;
			else
				if(subject[i]==c)
					sum=sum+t*3;
				else
					if(subject[i]==d)
						sum=sum+t*3;
					else
						if(subject[i]==e)
							sum=sum+t*4;
						else
							if(subject[i]==f)
								sum=sum+t*3;
							else
								if(subject[i]==g)
									sum=sum+t*3;
								else
									if(subject[i]==h)
										sum=sum+t*4;
	printf("\n\n\tSum as numerator is given as:%d",sum);

	gpa=sum/24;
	
	printf("\n\n\tThe G.P.A or the Score for the given regulations is given as :");
}		
