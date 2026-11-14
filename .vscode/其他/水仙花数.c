#include<stdio.h>
int find(int n) 
{
    int sum=0,i,j,a=0,b=0,c=0;
    
    if(n<100||n>999)
    {
        return 0;
    }
    else
    {
        for(i=100;i<=n;i++)
        {            
            a=i/100;
            b=(i/10)%10;
            c=i%10;
            if(i==a*a*a+b*b*b+c*c*c)
            {
                sum++;
            }
        }
    }
    return sum;
}
int main()
{
    int z,n;
    scanf("%d",&n);
    z=find(n);
    printf("%d",z);
}