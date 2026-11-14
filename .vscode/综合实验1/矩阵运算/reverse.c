#include<claim.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ReverseMatrix(Matrix*A, Matrix*B)//B是A的逆矩阵
{
    if(A->row!=A->col)
    {
        printf("are you serious?这东西可逆？");
        return;
    }
    int i,j,ROW=0,COL,max,n,flag=0;
    n=A->row;
    double mul=0,*term;
    double  **work = (double ** )malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++)
    {
        work[i] = (double *)malloc(2 * n * sizeof(double));
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            work[i][j] = A->mat[i][j];                
            work[i][n + j] = (i == j) ? 1.0 : 0.0;     
        }
    }
    for(COL=0;COL<A->col;COL++)
    {
        flag=0;
        while(ROW<A->row)
        {
            for (i = ROW; i < n; i++) 
            {
                if(fabs(work[i][COL])>1e-9)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
            else
            {
                ROW++;
            }
        }
        if(flag==0)
        {
            printf("矩阵不可逆！");
            return;
        }
        max = ROW; 
        for(i=ROW;i<A->row;i++) 
        {
            if(fabs(work[i][COL])>fabs(work[max][COL])) 
            {
                max=i;
            }
        }

        if(max!=ROW)
        {  
            term=work[ROW];
            work[ROW]=work[max];
            work[max]=term;
        }
        for(j=COL;j<(2*A->col);j++)
        {
           work[ROW][j]=work[ROW][j]/work[ROW][COL];
        }
        for(i = 0; i < A->row; i++) 
        {
            mul = work[i][COL];
            if(i == ROW||fabs(mul) < 1e-9) 
            {
                continue; // 跳过自己
            }
            
            for(j = COL; j < 2 * n; j++) 
            {
                work[i][j] = work[i][j] - mul * work[ROW][j];
            }
        }
        ROW++;
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            B->mat[i][j] = work[i][n + j]; // 抄右半边的 n 列
        }
    }
    return;
}