#include <stdio.h>
#include <math.h>

int main()
{
    int N,i,j,k;
    int ret=scanf("%d",&N);
    if(ret==0||N<2)
    {
        printf("error");
    }
    for(i=2;i<=N;i++)
    {
        if(i%2==0&&i!=2)
            continue;
        else
        {
            k=sqrt((double)i);
            for(j=2;j<=k;j++)
            {
                if(i%j==0)
                    break;
            }
            if(j>k)
                printf("%d,",i);
        }
    }
    return 0;
}
