#include<stdio.h>
#include <math.h>
 void stdavg(int, int ,int ,int, int, int *,  float * );


void stdavg(int a,int b,int c,int d,int e,int *addi,float *avgi)
{

*addi=a+b+c+d+e;

*avgi=*addi/5;

}int main()
{int a,b,c,d,e,plus=0 ;
float mean;
printf("ENTER FIVE NUMBERS\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  stdavg(a,b,c,d,e,&plus,&mean);
printf("the sum of number is %d\n",plus);
printf("The average is %f  ",mean);
return 0;
}
