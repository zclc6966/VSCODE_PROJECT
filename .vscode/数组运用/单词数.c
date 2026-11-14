#include<stdio.h>
int main()
{
    char s[100];
    int i,word=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' '&&s[i+1]==' ')
        {
            word++;
        }
        else if(s[i]!=' '&&s[i+1]=='\0')
        {
            word++;
        }
        
    }
    printf("%d",word);
}