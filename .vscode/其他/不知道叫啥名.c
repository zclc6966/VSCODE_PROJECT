#include <stdio.h>
int main()
{
    unsigned long long k,m,term=1;
    scanf("%d",&m);
    for(k=0;;k++)
    {
        term=term*2;
        if(term>m)
        break;
    }
    printf("%d",k);
    return 0;
}