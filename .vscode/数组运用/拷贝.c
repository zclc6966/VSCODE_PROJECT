#include<stdio.h>
int main()
{
    char string1[100],string2[100];
    int i,n=0;
    scanf("%s",string1);
    for(i=0;string1[i]!='\0';i++)
    {
        string2[i+n]=string1[i];
        if((i+1)%2==0)
        {
            if(string1[i+1]==0)
            {
                continue;
            }
            string2[i+n+1]='*';
            n++;
        }
    }
    string2[i+n]='\n';
    printf("%s",string2);
    return 0;
}