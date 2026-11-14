#include<stdio.h>

int main()
{
    char *month[12]={"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    int n;
    scanf("%d",&n);
    if(n>0&&n<13)
    {
        printf("%s",month[n-1]);
    }
    else
    {
        printf("error!");
    }
    return 0;
}