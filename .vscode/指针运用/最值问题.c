#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,total=0,max,min,p1,p2;
    scanf("%d",&total);
    if(total<1)
    {
        printf("error");
        return 0;
    }
    int *str=(int*)malloc(total*sizeof(int));
    if(str==NULL)
    {
        printf("error");
        return 0;
    }
    
    for(i=0;i<total;i++)
    {
        scanf("%d",&*(str+i));
    }
    if(i!=total)
    {
        printf("error");
        return 0;
    }
    max=*(str+0);
    min=*(str+0);
    p1=1;
    p2=1;
    for(j=0;j<total;j++)
    {
        if(*(str+j)>max)
        {
            p1=j+1;
            max=*(str+j);
        }
        if(*(str+j)<min)
        {
            p2=j+1;
            min=*(str+j);
        }
    }
    printf("max:%d,position:%d\n",max,p1);
    printf("min:%d,position:%d\n",min,p2);
    return 0;
}