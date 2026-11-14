#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50],string2[50],ch;
    int i=0,j=0,k,l,n=0,flag0=0,flag1=0,ans[10];
    while((ch=getchar())!='\n')
    {
        string1[i]=ch;
        i++;
    }
    while((ch=getchar())!='\n')
    {
        string2[j]=ch;
        j++;
    }
    if(j>i)
    {
        printf("NO");
        return 0;
    }
    for(k=0;string1[k]!=0;k++)
    {
        flag0=0;
        for(l=0;l<j;l++)
        {
            if(string1[k+l]==string2[l])
            {
                flag0++;
                continue;
            }
            else
            {
                break;
            }
        }
        if(flag0==j)
        {
            ans[n]=k;
            n++;
            flag1++;
        }
    }
    if(flag1!=0)
    {
        printf("%dtimes",flag1);
        for(i=0;i<n;i++)
        {
            printf(",%d",ans[i]);
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
