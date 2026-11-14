#include <stdio.h>
int main()
{
    int array[100],j,n=0,i,max,re,k,m=0;
    int long long N;
    scanf("%d",&n);
    if(n==0)
    {
        printf("error");
        return 0;
    }
    for(i=0;i<=2*(n-1);i=i+2)
    {
        scanf("%d %d",&array[i],&array[i+1]);
        if(array[i]>array[i+1]>=0)
        {
            continue;
        }
        else
        {
            printf("error");
            return 0;
        }
    }
    max=array[0];
    for(i=0;i<=2*n-2;i=i+2)
    {
        if(array[i]>max)
        {
            max=array[i];
            re=array[i+1];
        }
    }
    for(k=1;;k++)
    {
        N=k*max+re;
        int flag=1;
       for(i=0;i<=2*n-2;i=i+2)
        {
            
           if(N%array[i]!=array[i+1])
           {
            flag=0;
            break;
           } 
        }
        if(flag==1)
           {
            break;
           }
    }
    printf("%d %d",N,k);
    return 0;

}