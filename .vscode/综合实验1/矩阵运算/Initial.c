#include<stdio.h>
#include<stdlib.h>
#include<claim.h>
void InitialMatrix(Matrix*T,int row,int col)
{
    int i;
    T->row=row;
    T->col=col;
    //矩阵初始化，先把行列两个结构体初始化
    T->mat=malloc(row*sizeof(double*));
    if(T->mat==NULL)
    {
        return;
    }
    //二维数组初始化，先行再列
    for(i=0;i<row;i++)
    {
        T->mat[i]=malloc(col*sizeof(double));
        if(T->mat[i]==NULL)
        {
            return;
        }
    }
    //矩阵里面存的是double类型的变量，所以列中分配double类型的内存，而行数组里面存放的实际上是列数组，因此要存double*类型变量
    //其中，有任何一个内存分配错误就返回
}

