#include<stdio.h>
int main()
{int bs; float da; float ra; float gross;
printf("Enter your basic salary:\n");
scanf("%d",&bs);
da=0.4*bs;
ra=0.2*bs;
gross=bs+da+ra;
printf("Your Gross salary is %f", gross);
return 0;
}
