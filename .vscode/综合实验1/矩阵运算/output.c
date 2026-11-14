#include<stdio.h>
#include<stdlib.h>
#include<claim.h>

void PrintfMatrix(Matrix*T)//矩阵输出
{
    int i,j;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            printf("%d ",T->mat[i][j]);
            
        }
        printf("\n");
    }
    return;
}