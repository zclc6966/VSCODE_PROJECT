#include<stdio.h>
#include<string.h>
int SubStrNum(char * str,char * substr)
{
    int i=0,j=0,k=0,l=0,flag=0,times=0;
    char ch;
    if(str==NULL||substr==NULL)
    {
        printf("error");
        return -1;
    }
    i=strlen(str);
    j=strlen(substr);
    if(j>i)
    {
        printf("error");
        return -1;
    }
    for(k=0;k<i;k++)
    {
        flag=0;
        for(l=0;l<j;l++)
        {
            if(str[k+l]!=substr[l])
            {
                break;
            }
            flag++;
        }
        if(flag==j)
        {
            times++;
            k=k+l-1;
        }
    }
    printf("match times=%d",times);
    return times;
}
