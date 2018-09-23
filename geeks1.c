#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int arr[5]={a,b,c,d},i,j;
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(arr[i]>arr[j])
                continue;
            else
                break;
        }
        if(j==4)
            return arr[i];
    }   
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
