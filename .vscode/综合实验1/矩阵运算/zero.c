#include<stdio.h>
#include<stdlib.h>
#include<claim.h>

void InitialMatrixZero(Matrix*T,int row,int col)//初始化为0
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            T->mat[i][j]=0.0;
        }
    }
    return;
}