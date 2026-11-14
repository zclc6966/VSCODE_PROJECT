#include<stdio.h>
 void main()
{
    char a[30];
    int i=0,j,m=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    for(j=0;j<i/2;j++)
    {
        if(a[j]==a[i-j-1])
        m++;
    }
    if(m>=i/2)
    printf("true");
    else
    printf("false");
}


    
