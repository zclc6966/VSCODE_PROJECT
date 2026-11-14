#include<stdio.h>
#include<stdlib.h>
#include<claim.h>
int AddMatrix(Matrix*A,Matrix*B,Matrix*C)//矩阵加
{
    int i,j;
    if(A->row==B->row&&A->col==B->col)
    {
        for(i=0;i<A->row;i++)
        {
            for(j=0;j<A->col;j++)
            {
                C->mat[i][j]=A->mat[i][j]+B->mat[i][j];
            }
        }
        return C;
    }
    else
    {
        printf("error!");
        return 0;
    }
}

int MinusMatrix(Matrix*A,Matrix*B,Matrix*C)//矩阵减
{
    int i,j;
    if(A->row==B->row&&A->col==B->col)
    {
        for(i=0;i<A->row;i++)
        {
            for(j=0;j<A->col;j++)
            {
                C->mat[i][j]=A->mat[i][j]-B->mat[i][j];
            }
        }
        return C;
    }
    else
    {
        printf("error!");
        return 0;
    }
}

