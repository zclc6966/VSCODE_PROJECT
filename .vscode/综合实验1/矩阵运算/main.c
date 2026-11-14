#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct{
	double**mat;
	int row, col;
	}Matrix;

void InitialMatrix(Matrix*T,int row,int col);//只分配空间不初始化；
void InitialMatrixZero(Matrix*T,int row,int col);//初始化为0
void InitialMatrixRand(Matrix *T,int row, int col); //初始化为50以内随机正整数
void InputMatrix(Matrix*T);					//键盘输入矩阵
void DestroyMatrix(Matrix*T);				//释放矩阵空间
void PrintfMatrix(Matrix*T);					//矩阵输出
int AddMatrix(Matrix*A,Matrix*B,Matrix*C);//矩阵加
int MinusMatrix(Matrix*A,Matrix*B,Matrix*C); //矩阵减
int MultiMatrix(Matrix*A,Matrix*B,Matrix*C); //矩阵乘法
double MeanMatrix(Matrix*T);				//矩阵元素均值
int SubMatrix(Matrix*T1,Matrix*T2,int BeginRow,int BeginCol,int EndRow,int EndCol); //求T1的子矩阵T2;
void PrintMatrix(Matrix*T); //矩阵输出
int MaxMatrix(Matrix*T); 			//矩阵元素最大值
void TransMatrix(Matrix*T); 		//矩阵转置
void NormMatrix(Matrix*T); 		//矩阵归一化
void ReverseMatrix(Matrix*A, Matrix*B); //B是A的逆矩阵

int main()
{
    int n,row=0,col=0,BeginRow=0,BeginCol=0,EndRow=0,EndCol=0;
    int num=0;
    double num1=0.0;
    Matrix a,b,c;
    printf("矩阵功能测试请选择功能,输入对应的数字：\n");
    scanf("%d",&n);
    while(1)
    {
        num=0;
        num1=0.0;
        switch(n)
        {
            case 1:
            {
                printf("输入一个矩阵，求矩阵均值");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);
                num1=MeanMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }
            case 2:
            {
                printf("产生一个随机数矩阵，求矩阵均值");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);
                InputMatrix(&a);
                num1=MeanMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }
            case 3:
            {
                printf("输入两个个矩阵，求矩阵和");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixZero(&b,row,col);
                InputMatrix(&b);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                AddMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 4:
            {
                printf("输入两个个矩阵，求矩阵差");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixZero(&b,row,col);
                InputMatrix(&b);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                MinusMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 5:
            {
                printf("输入两个个矩阵，求矩阵积");
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixZero(&b,row,col);
                InputMatrix(&b);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                MultiMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 6:
            {
                printf("产生两个个随机数矩阵，求矩阵和");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixRand(&b,row,col);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                AddMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 7:
            {
                printf("产生两个个随机数矩阵，求矩阵差");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixRand(&b,row,col);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                MinusMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 8:
            {
                printf("产生两个个随机数矩阵，求矩阵积");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);

                scanf("%d %d",&row,&col);
                InitialMatrix(&b,row,col);
                InitialMatrixRand(&b,row,col);

                InitialMatrix(&c,row,col);
                InitialMatrixZero(&c,row,col);
                
                MultiMatrix(&a,&b,&c);
                PrintfMatrix(&c);

                DestroyMatrix(&a);
                DestroyMatrix(&b);
                DestroyMatrix(&c);
                continue;
            }case 9:
            {
                printf("求矩阵的子阵");
                printf("请输入原矩阵行列数");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);

                InitialMatrix(&b,row,col);
                InitialMatrixZero(&b,row,col);

                printf("请输入子矩阵行列,先行再列");
                scanf("%d %d %d %d",&BeginRow,&EndRow,&BeginCol,&EndCol);
                
                printf("请输入原矩阵");
                InputMatrix(&a);

                SubMatrix(&a,&b,BeginRow,BeginCol,EndRow,EndCol);
                DestroyMatrix(&a);
                DestroyMatrix(&b);
                continue;
            }case 10:
            {
                printf("输入一个矩阵，求矩阵元素的最大值");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);
                num1=MaxMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 11:
            {
                printf("产生一个随机数矩阵，求矩阵元素的最大值");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);
                num1=MaxMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 12:
            {
                printf("输入一个矩阵，求矩阵转置");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);
                TransMatrix(&a);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 13:
            {
                printf("产生一个随机数矩阵，求矩阵转置");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);
                TransMatrix(&a);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 14:
            {
                printf("输入一个矩阵，求矩阵归一化");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);
                NormMatrix(&a);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 15:
            {
                printf("产生一个随机数矩阵，求矩阵归一化");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrixRand(&a,row,col);
                NormMatrix(&a);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                continue;
            }case 16:
            {
                printf("输入一个矩阵，求矩阵的逆");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrix(&b,row,col);
                InitialMatrixZero(&a,row,col);
                InputMatrix(&a);
                ReverseMatrix(&a,&b);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                DestroyMatrix(&b);
                continue;
            }case 17:
            {
                printf("产生一个随机数矩阵，求矩阵的逆");
                scanf("%d %d",&row,&col);
                InitialMatrix(&a,row,col);
                InitialMatrix(&b,row,col);
                InitialMatrixRand(&a,row,col);
                InputMatrix(&a);
                ReverseMatrix(&a,&b);
                PrintfMatrix(&a);
                DestroyMatrix(&a);
                DestroyMatrix(&b);
                continue;
            }case 0:
            {
                printf("结束!");
                break;
            }
        }
    }
    return 0;
}





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

int MaxMatrix(Matrix*T)//矩阵元素最大值
{
    int i,j,max;
    max=T->mat[0][0];
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            if(T->mat[i][j]>max)
            {
                max=T->mat[i][j];
            }
        }
    }
    return max;
}

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

void NormMatrix(Matrix*T)//矩阵归一化
{
    int i,j,sum;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            sum+=T->mat[i][j];
        }
    }
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            T->mat[i][j]=(T->mat[i][j]/sum);
        }
    }
    return;
}

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

void TransMatrix(Matrix*T)//矩阵转置
{
    int i,j,term=0;
    for(i=0;i<T->row;i++)
    {
        for(j=0;j<T->col;j++)
        {
            term=T->mat[i][j];
            T->mat[i][j]=T->mat[j][i];
            T->mat[j][i]=term;
        }
    }
    return;
}

void InitialMatrixZero(Matrix*T,int row,int col)//初始化为0
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            T->mat[i][j]=0.0;
        }
    }
    return;
}