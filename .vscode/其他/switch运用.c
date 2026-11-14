#include<stdio.h>

int main(){
   int year,leapyear,month,day;
   printf("please input the year,month\n");
   scanf("%d %d",&year,&month);
   if(year%4==0&&year%100!=0||year%400==0)
   {leapyear=1;}
   else
   {leapyear=0;}
   switch(month)
   {
      case1:
      case3:
      case5:
      case7:
      case8:
      case10:
      case12:
          day=31;
          break;
      case4:
      case6:
      case9:
      case11:
           day=30;
           break;
      case2:
        if(leapyear)
           day=29;
        else
           day=28;
        break;
      default:
         day=-1;
         break;

   }
   
   if(day!=-1)
   {printf("%d 年%d 月有%d 天",&year,&month,&day);}
   else
   {printf("ERROR!");}
   return 0;

}