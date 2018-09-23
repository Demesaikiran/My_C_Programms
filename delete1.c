#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a,b,i;
    char num[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if(i<=9)
            printf("%s\n",num[i-1]);
        else
        {
            if(i%2==0)
                printf("even\n");
            else
                printf("odd");
        }
    }
  	// Complete the code.

    return 0;
}
