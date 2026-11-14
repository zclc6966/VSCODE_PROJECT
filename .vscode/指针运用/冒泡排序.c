#include<stdio.h>
void bubbleSort(int data[],int n)
{
    int i,j,term=0,flag=0;
    if(n<=1)
    {
        return;
    }
    else
    {
        while(1)
        {
            
            for(i=0;i<n-1;i++)
            {
                if (data[i]>data[i+1])
                {
                    term=data[i];
                    data[i]=data[i+1];
                    data[i+1]=term;
                }
                else
                {
                    flag++;
                }
            }
            if(flag==n-1)
            {
                break;
            }
            else
            {
                flag=0;
            }
        }
   
    }
}
