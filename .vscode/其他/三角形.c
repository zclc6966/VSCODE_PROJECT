#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    if(n<1||n>80||n%2==0)
    {
        printf("error");
    }
    else
    {
        for(i=1;i<=n;i=i+2)
        {
            for(j=0;j<(n-i)/2;j++)
            {
                printf(" ");
            }
            for(k=0;k<i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}