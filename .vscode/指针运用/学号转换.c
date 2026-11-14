#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int fun(const char *p, int result[])
{
    int size=0,i,offset=0;
    char buf[8];
    int len[4]={4,2,4,3};
    if(p==NULL)
    {
        return 0;
    }
    for(size=0;*(p+size)!='\0';size++)
    {
        if(!isdigit(*(p+size)))
        {
            return 0;
        }
    }
    if(size!=13)
    {
        return 0;
    }
    for(i=0;i<4;i++)
    {
        memcpy(buf,p+offset,len[i]);
        buf[len[i]]='\0';
        result[i]=atoi(buf);
        offset=offset+len[i];
    }
    return 1;
    
    
}
