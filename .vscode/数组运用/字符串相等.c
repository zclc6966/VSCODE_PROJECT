#include<stdio.h>
#include <string.h>
void main()
{
    char string1[256],string2[256];
    int c1,c2,i=0,j=0;
    while((c1=getchar())!='\n')
    {
        string1[i]=c1;
        i++;
    }
    string1[i]='\0';
    while((c2=getchar())!='\n')
    {
        string2[j]=c2;
        j++;
    }
    string2[j]='\0';
    if(strcmp(string1,string2)==0)
    {
        printf("equal");
    }
    else
    {
        printf("unequal");
    }
        
}