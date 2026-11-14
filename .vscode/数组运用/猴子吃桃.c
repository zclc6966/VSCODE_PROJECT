#include <stdio.h>

int main()
{
    int array[10],i=0,j=1,sum=0;
    for(i=0;i<=8;i++)
    { 
        j=(j+1)*2;
        array[i]=j;
        
    }
    for(i=0;i<=8;i++)
    {
        printf("%d,",array[i]);
    }
    printf("%d",array[8]);
    return 0;
}