//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include <stdio.h>
#include <math.h>
void main(float a,float b,float c) 
{	double x,y;
scanf("%1f,%1f",&x,&y);
if(b*b-4*a*c>=0)
	x=(-b+sqrt(b*b-4*a*c))/(2*a);
	y=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("%f\n",x,y);	
if(b*b-4*a*c<0)
	printf("error\n");
	return;
}
