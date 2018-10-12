#include<stdio.h>
#include<math.h>

 int main()
{int sum;
printf("Enter the value of 'x' to calculate the sum of first seven terms in the algoritm.");
float x,a,b,product;
scanf("%f",&x);
b=(x-1)/x;
for(a=2.0;a<=7.0;a++)
{
product=pow(b,a);
sum=b+product;


}
printf("%d\n",sum);
return 0;
}
