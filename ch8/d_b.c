#include<stdio.h>
int power(int x,int y);
int main ()
{
int a,b,expo;
printf("Enter the number and thepwer it should be raised to..\n\n");
scanf ("%d  %d",&a,&b);
expo=power(a,b);
printf("%d raised to the power of %d is %d",a,b,expo);
return 0;
}
int power (int x, int y)
{

int count,times;
{if(y>=2)
count=1;
for  (times=1;times<=y;times++)
count=count*x;
return count;
 if (y=1)
return x;	
}
	}
	

