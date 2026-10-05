#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}

int a,b,c,d,i,j,k,l;
int main()
{
    scanf("%d %d",&a,&b);
    k=max(a,b);
    l=min(a,b);
    for(i=l;i>=1;i--)
    {   if(a%i==0)
        {
            if(b%i==0)
            break;
        }
    
    }
    if(i>l)
    {   
        c=1; 
    }
    else
    {
        c=i;
    }

    for(j=k;;j++)
    {
        if(j%a==0)
        {
            if(j%b==0)
            break;
        }
    }
    printf("%d,%d",c,j);
    return 0;
}


