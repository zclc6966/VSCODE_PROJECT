#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<claim.h>
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