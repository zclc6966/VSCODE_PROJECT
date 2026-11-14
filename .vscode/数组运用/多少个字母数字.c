#include <stdio.h>
int main()
{
    int i,j,a=0,b=0;
    char string[100],c;
    for(j=0;;j++)
    {
        string[j]=getchar();
        if(string[j]=='\n')
        {
            j++;
            string[j]='\0';
            break;
        }
    }    
    for(i=0;string[i]!='\0';i++)
    {   
        c=string[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            a++;
        }
        else if(c>='0' && c<='9')
        {
            b++;
        }
    }
    printf("letters:%d,digits:%d",a,b);
    return 0;
}