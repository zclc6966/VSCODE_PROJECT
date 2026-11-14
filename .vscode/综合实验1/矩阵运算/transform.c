#include<claim.h>
#include<stdio.h>
#include<stdlib.h>

void TransMatrix(Matrix*T)//矩阵转置
{
    int i,j,term=0;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            term=T->mat[i][j];
            T->mat[i][j]=T->mat[j][i];
            T->mat[j][i]=term;
        }
    }
    return;
}