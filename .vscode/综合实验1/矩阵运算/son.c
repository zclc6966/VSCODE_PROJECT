#include<claim.h>
#include<stdio.h>
#include<stdlib.h>
int SubMatrix(Matrix*T1,Matrix*T2,int BeginRow,int BeginCol,int EndRow,int EndCol)//求T1的子矩阵T2;
{
    int i,j;
    if(BeginCol<0||BeginCol>T1->col
        ||EndCol<0||EndCol>T1->col
        ||BeginRow<0||BeginRow>T1->row
        ||EndRow<0||EndRow>T1->row)
    {
        printf("error!");
        return 0;
    }
    for(i=0;i<EndRow-BeginRow+1;i++)
    {
        for(j=0;j<EndCol-BeginCol+1;j++)
        {
            T2->mat[i][j]=T1->mat[BeginRow+i][BeginCol+j];
        }
    }
    return T2;
}