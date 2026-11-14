#include <stdio.h>
#include <ctype.h>
int main()
{
    char array[50];
    int i,j,n;
    scanf("%s",array);
    for(n=0;array[n]!='\0';n++)
    {

    }
    for(i=0;i<n;i++)
    {
        if(array[i]==array[i+1])
        {
            if(!isalpha(array[i+1])&&!isdigit(array[i+1]))
            {
                for(j=i+1;array[j]!='\0';j++)
                {
                    array[j]=array[j+1];
                }
                n--;
                i--;
            }
        }
    }
    printf("%s",array);
}