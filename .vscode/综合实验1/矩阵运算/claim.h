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

