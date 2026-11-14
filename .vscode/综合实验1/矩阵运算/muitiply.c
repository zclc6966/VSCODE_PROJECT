#include<claim.h>
#include<stdio.h>
#include<stdlib.h>

int MultiMatrix(Matrix*A,Matrix*B,Matrix*C) //矩阵乘法
{
    int i,j,k,sum=0,term=0;
    if(A->row!=B->col)
    {
        printf("error!");
        return 0;
    }
    for(i=0;i<A->row;i++)
    {
        for(j=0;j<B->col;j++)
        {
            for(k=0;k<A->row;k++)
            {
                C->mat[i][j]+=A->mat[i][k]+B->mat[k][j];
            }
        }
    }
    return C;
}