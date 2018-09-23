#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        char ch,sr[100],s[100];
    int i;
    	printf("enter value to be stored in string:");
        scanf("%c",&ch);
        scanf("%s ",sr);
        scanf("%[^\n]%*c",&s);
    
    printf("%c\n",ch);
    printf("%s\n",sr);
    printf("%s",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
