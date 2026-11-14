#include<stdio.h>
void find(int j)
{
    int i,k,l,m,sum,array[100];
    for(i=2;i<=j;i++)
    {
        l=0;
        sum=0;
        for(k=1;k<=i/2;k++)
        {
            if(i%k==0)
            {
                array[l]=k;
                l++;
                sum+=k;
            }
        }
        if(sum==i)
        {
            printf("%d=",i);
            for(m=0;m<l;m++)
            {
                if(m==l-1)
                {
                    printf("%d\n",array[m]);
                }
                else
                {
                    printf("%d+",array[m]);
                }
            }
        }
    }
    return;
}
int main()
{
    int j;
    scanf("%d",&j);
    find(j);
    return 0;
}