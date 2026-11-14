#include<stdio.h>

int max(int a,int b)
{
    int c;
    c=(a>=b?a:b);
    return c;
}
int min(int a,int b)
{
    int c;
    c=(a<=b?a:b);
    return c;
}
int average(int s[])
{
    int sum;
    int i;
    sum=0;
    for(i=0;i<10;i++)
    {
        sum+=s[i];
    }
    return sum/10;
    
}
void minmax(int s[])
{
    int i;
    int M,m,ave,n=0;
    M=s[0];
    m=s[0];
    for(i=0;i<10;i++)
    {
        M=max(M,s[i]);
        m=min(m,s[i]);
        
    }
    ave=average(s); 
    printf("%d,%d,%d",m,M,ave);
}

int main()
{
    int s[10];
    int n;
    for(n=0;n<10;n++)
    {
       scanf("%d",&s[n]);
    } 
   
    minmax(s);  
}