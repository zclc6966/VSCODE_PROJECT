#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<claim.h>

void InitialMatrixRand(Matrix *T,int row, int col) //初始化为50以内随机正整数
{
    int i,j,r;
    srand((unsigned int)time(NULL));
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            r=rand()%50+1;
            T->mat[i][j]=r;
        }
    }
}