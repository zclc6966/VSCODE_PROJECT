#include<stdio.h>
int main()
{
    int year,month,day;
    scanf("%d %d",&year,&month);
    for(;month>12;month-=12)
    {}
        switch(month)
        {  
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                day=31;
                break;
            }

            case 4:
            case 6:
            case 9:
            case 11:
            {
                day=30;
                break;
            }
            case 2:
            {
                if(year%400==0||(year%4==0&&year%100!=0))
                {
                    day=29;
                    break;
                }
                else
                {
                    day=28;
                    break;
                }
            }
            
        }
        printf("days:%d",day);
}
