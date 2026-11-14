#include <stdio.h>
int main()
{
    int j,n,result=0,k=1;
    scanf("%d",&n);
    if(n<1||n>10)
    {
        printf("error");
        return 0;
    }
    else
    {
        for(j=1;j<=n;j++)
        {   
            k=k*j;
            result=result+k;
        }
    }
    printf("%d\n",result);
    return 0;
}