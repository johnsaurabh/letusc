#include<stdio.h>
#include<math.h>
float main()

{

float a,p=1000.0,q,n,r;
printf("The principle,interst compounded,rate of interst,and principal compoundd respectively is:\n\n  ");
for (n=1.0;n<=10.0; n++)
{
q=2*n;
r=5*n;
a =p*(pow(1+r/q,n*q));
p=p+a;
printf( "\n\n%f, %f, %f, %f\n",p,q,r,a);}

return 0;
}

















