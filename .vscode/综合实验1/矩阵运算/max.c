#include<stdio.h>
#include<stdlib.h>
#include<claim.h>

int MaxMatrix(Matrix*T)//矩阵元素最大值
{
    int i,j,max;
    max=T->mat[0][0];
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            if(T->mat[i][j]>max)
            {
                max=T->mat[i][j];
            }
        }
    }
    return max;
}