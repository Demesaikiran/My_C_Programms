#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,count=0,rem,i,temp,sum=0;
    scanf("%d", &n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    printf("%d",count);
    for(i=count;i>0;i--)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
	printf("%d%d",sum,n);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
