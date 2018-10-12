#include<stdio.h>
int main()
{

int i,num;
i=2;
for (num=1; num<=300;num++) 
{

for (i=2; i<=num-1; i++)
{
if  (num%i==0)
break;
 }
 if (i==num)
printf("%d\n",num);
   continue;
}
return 0;
}
