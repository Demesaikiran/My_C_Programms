//This programm is to convert Binary form to decimal form 
//Introducing the user defined functions 
//1.The function used to convert binary to decimal
//2.This fuction is to calculate the power with two and returns the value to the above function
//3.This function is to return the single single digit to the !st function for further calculation
#include<stdio.h>
#include<stdlib.h>
long long int binaryToDecimal(long long int num);
long long int powerTwo(long long int num);
long long int singleDigit(long long int num);
int main()
{
	system("clear");//Removes all parts of terminal and keeps screen clean and gives only the output
	long long int n,decimal;
	printf("\n\nEnter any Binary value you know to convert it into Decimal :");
	scanf("%lld",&n);
	decimal=binaryToDecimal(n);
	printf("\nThe Decimal nuber of given Binary number %lld is %lld\n\n",n,decimal);
	return 0;
}//End of the main function

long long int binaryToDecimal(long long int num)
{
	long long int i,decimal=0;
	for(i=0;num!=0;i++)
	{
		decimal=decimal+singleDigit(num)*powerTwo(i);
		num=num/10;
	}
	return(decimal);
}//End of the binaryTodecimal function which converts binary to decimal number

long long int powerTwo(long long int num)
{
	long long int i,power=1;
	for(i=1;i<=num;i++)
		power = power*2;
	return(power);
}//End of the powerTwo function which calculates the powertwo of a given number

long long int singleDigit(long long int num)
{
	long long int digit;
	digit=num%10;
	return(digit);
}//End of the Single digit function return to the 1st function for calculation




	
