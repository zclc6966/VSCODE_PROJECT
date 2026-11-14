#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"claim.h"
int main()
{
    int ret,i,j,a,b,c,d;
    char name[20],number[20];
    char line[]={"zhang 20260109 92 95 98 93"};
    ret=sscanf(line,"%s %s %d %d %d %d ",name,number,&a,&b,&c,&d);
    printf("%s %s %d %d %d %d ",name,number,a,b,c,d);

}