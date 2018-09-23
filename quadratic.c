#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int a,b,c,disc;
    float root1,root2,imaginary,real;
    
    printf("\n\n\nEnter the coefficients of variable : ");
    scanf("%d%d%d",&a,&b,&c);
    
    disc = b*b - 4*a*c;
    
    if(disc==0)
    {
       root1 = (-b+sqrt(disc))/(2*a);
    
       root2 = (-b-sqrt(disc))/(2*a);
    
    
       printf("The given equation has equal and real roots");
    
       printf("The roots of given equation are %f and %f",root1,root2);
    }
    if(disc<0)
    {
            real = -b/2*a;
            imaginary = (sqrt((-1)*disc))/2*a;
            printf("\n\n\nThe given equation has imaginary roots");
            printf("\n\n\nThe roots of given equation root1 = %3f + %3f i \troot2 = %f - %f i\n\n\n",real,imaginary,real,imaginary);
        
    }   
    if(disc>0)
    {
            root1 = (-b+sqrt(disc))/(2*a);
    
            root2 = (-b-sqrt(disc))/(2*a);
    
    
            printf("\n\n\nThe given equation has real and distinct roots\n\n\n");
            
    
             printf("\n\n\nThe roots of given equation are %f and %f\n\n\n",root1,root2);
    }
}    
