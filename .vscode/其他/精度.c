#include<stdio.h>
void main()
{
    float a,sum=1,term=1,b,m,n;
    scanf("%f",&a);
    for(m=1,n=1;;m++,n++)
    {
        term*=m/(2*n+1);
        b=sum;
        sum+=term;
        if((sum-b)*2<=a)
        {
            break;
        }
    }
    printf("%f",sum*2);

}