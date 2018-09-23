#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="life";
    char* y=&x[3];
    printf("%c",*y);
    printf("\n%c",*(y+1));
    printf("\n%c",*(y+4));
}