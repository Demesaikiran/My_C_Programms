#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int arr[5]={a,b,c,0,0},i,j,x;
   // arr[0]=a;
    //arr[1]=b;
    //arr[2]=c;
    
    
    for(i=3;i<n;i++)
    {
    	arr[i]=0;
        for(j=i-1;j>=(i-3);j--)
        {
            arr[i]+=arr[j];
        }
        printf("%d",arr[i]);
    }
    printf("%d",arr[4]);
    printf("%d",n-1);
    x=n-1;
    printf("%d",arr[x]);
    
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
