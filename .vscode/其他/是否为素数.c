#include<stdio.h>
#include<math.h>
int main(){
   int a,b,i;
   scanf("%d",&a);
   b=sqrt((double)a);
   if(a>3)
   {
        for(i=2;i<=b;i++)
        {
            if(a%i==0)
            break;
        }
        if(i<=b)
        {
            printf("no");
        }
        else
        {
            printf("yes");
        }

   }
   else
   printf("error");
   return 0;
}