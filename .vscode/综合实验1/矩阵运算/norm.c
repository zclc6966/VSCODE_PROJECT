#include<claim.h>
#include<stdio.h>
#include<stdlib.h>

void NormMatrix(Matrix*T)//矩阵归一化
{
    int i,j,sum;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            sum+=T->mat[i][j];
        }
    }
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            T->mat[i][j]=(T->mat[i][j]/sum);
        }
    }
    return;
}