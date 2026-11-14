#include <stdio.h>
#include <string.h>
index(char s[], char t[])
{
    if(s==NULL||t==NULL)
    {
        return -1;
    }
    int size1=strlen(s);
    int size2=strlen(t);
    int i,j,flag=0;
    if(size2==0)
    {
        return 0;
    }
    
    for(i=0;i<=size1-size2;i++)
    {
        flag=0;
        if(s[i]==t[0])
        {
            for(j=1;j<=size2;j++)
            {
                if(s[i+j]==t[j])
                {
                    flag++;
                    continue;   
                }
                else
                {
                    break;
                }
            }
        }
        if(flag==size2)
        {
            return i;
        }
    }
    return -1;
}