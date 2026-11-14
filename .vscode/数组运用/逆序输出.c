#include <stdio.h>
int main()
{
    char str[100],term;
    int i,j;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {

    }
    for(j=0;j<i/2;j++)
    {
        term=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=term;
    }
    printf("%s",str);
    return 0;
}