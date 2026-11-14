#include<stdio.h>
void del(char *s,int n,int len)
{
    int i,j,size=0;
    
    if(s==NULL||n<0||len<0)
    {
        printf("error");
        return;
    }
   else
    {
        while(s[size]!=' ')
        {
            size++;
        }
        if(size<n+len)
        {
            printf("error");
            return;
        }
        i=n;
        j=n+len;
        while(j<=size)
        {
            s[i]=s[j];
            i++;
            j++;
        }
    }
}
