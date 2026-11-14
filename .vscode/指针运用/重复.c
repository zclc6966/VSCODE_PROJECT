#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void del(char *str)
{
    int size,i,j;
    for(size=0;str[size]!='\0';size++);
    for(i=0;i<size;i++)
    {
        if(str[i]==str[i+1])
        {
            if(!isdigit(str[i])&&!isalpha(str[i]))
            {
                for(j=i+1;j<size;j++)
                {
                    str[j]=str[j+1];
                }
                i--;
                size--;
                
            }
        }
    }
    return;
}
    
int main()
{
    char *str=malloc(100);
    scanf("%s",str);
    del(str);
    printf("%s",str);
}