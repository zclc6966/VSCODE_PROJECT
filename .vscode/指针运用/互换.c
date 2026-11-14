#include<stdio.h>
int ReverseArray(int array[],int size)
{
    int i,term=0;
    if(size<=0)
    {
        return 0;
    }
    else
    {
        for(i=0;i<size/2;i++)
        {
            term=array[i];
            array[i]=array[size-i-1];
            array[size-1-i]=term;
        }
        return 1;
    }
}
int main()
{
    int j,array[]={8,8,8,9,8,7,2,4,5,1,2},k;
    
    ReverseArray(array,11);
    for(j=0;j<11;j++)
    {
        printf("%d ",array[j]);
    }
    
}