#include <stdio.h>
int main()
{
    double x,sum=1.0,term=1;
    int i,n;
    scanf("%lf %d",&x,&n);
    if(n>=0)
    {   
       for(i=1;i<=n;i++)
       {
        term=term*x/i;
        sum+=term;
       }
       printf("%lf",sum);
    }
    else
    {  
        printf("error!");
        return 0;
    }
}   
