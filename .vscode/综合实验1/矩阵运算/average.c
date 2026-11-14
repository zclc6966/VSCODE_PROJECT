#include<claim.h>
#include<stdio.h>
#include<stdlib.h>
double MeanMatrix(Matrix*T)//矩阵元素均值
{
    int i,j;
    double ave=0,sum=0;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            sum+=T->mat[i][j];
        }
    }
    ave=sum/(T->row*T->col);
    printf("%lf",ave);
    return ave;
}