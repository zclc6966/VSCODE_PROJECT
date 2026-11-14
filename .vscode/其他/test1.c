#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a,b,c;
int c=0;
int pd(){
    scanf("%d",&b);
    if(b<a){
        printf("try to guess a bigger one\n");
        c++;
    }
    else{
        printf("try to guess a smaller one\n");
        c++;
    }

}

int main(){
   srand((unsigned int)time(NULL));
   a =rand()% 100+1;
   printf("Let us play guessing number!\n");
    for(int d=0;b!=a;d++)
    {
        if(b!=a)
        {
            pd();
            break;
        }
    }
    if(b==a)
     {  c++;
        printf("congratulations!\n");
        printf("you have made %d tries\n",c);                    
     }
    return 0;
}