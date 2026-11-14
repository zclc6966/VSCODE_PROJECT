#include<stdio.h>
#include<stdlib.h>
#include<claim.h>
void DestroyMatrix(Matrix*T)//释放矩阵空间
//第一步释放列；第二步释放行；第三步全部归零，指针指NULL
{
    int i;
    for(i=0;i<T->row;i++)
    {
        free(T->mat[i]);//释放每行的数据，实际上是一列一列释放
    }
    free(T->mat);//释放行
    T->row=0;
    T->col=0;
    T->mat=NULL;
}