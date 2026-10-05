#include<stdio.h>
int main()
{double a,b;
int c;
scanf("%lf" "%lf",&a,&b);
printf("please choose one operate mode:1,2,3,4\n");
scanf("%d",&c);
switch(c)
	{
	case 1:
		printf("plus\n");
		printf("the result is %lf",a+b);
		return 0;
	case 2:
		printf("subtract\n");
		printf("the result is %lf",a-b);
		return 0;
	case 3:
		printf("multiply\n");
		printf("the result is %lf",a*b);
		return 0;
	case 4:
		printf("divide\n");
		printf("the result is %lf",a/b);
		return 0;
	default:
		printf("胆子真是肥嘟嘟的");
		return 0;

	}
	
}