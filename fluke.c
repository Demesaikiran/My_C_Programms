#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]="xyzt";
    char* s2="helloworld";
    char* s3;
    char* s4;
    char* s5;
    char* s6;
    s3=s1;
    s4=s2;
    strcat(s1,s2);
    s5=strchr(s1,'y');
    s6=strrchr(s2,'o');
    printf("\n%s",s3);
    printf("\n\n%s",s4);
    printf("\n\n%s",s5);
    printf("\n\n%s",s6);
}