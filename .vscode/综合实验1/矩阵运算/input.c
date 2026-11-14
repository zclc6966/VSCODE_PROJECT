#include<stdio.h>
#include<stdlib.h>
#include<claim.h>
void InputMatrix(Matrix*T)//键盘输入矩阵
{
    int i,j;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            scanf("%d",T->mat[i][j]);
        }
    }
    return T;
}