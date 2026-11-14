#include<stdio.h>
int main()
{
    int n,k,sum=0;
    for(n=1;n<=1000;n++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==n)
            break;
            else if(n%k==0)
            {
                sum+=k;
            }
            
        }
    if(sum==n)
    printf("%d\n",n);
    sum=0;
    }
    return 0;
}