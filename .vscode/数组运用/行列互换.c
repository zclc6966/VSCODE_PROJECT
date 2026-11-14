#include <stdio.h>
void tran(int array[5][3], int out_array[3][5])
{
    int i,j,term,null,flag=1;
    
    if(array==NULL||out_array==NULL)
    {
        printf("error");
        return;
    }
    else
    {
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=2;j++)
            {
                out_array[j][i]=array[i][j];
            }
        }
    }
}
