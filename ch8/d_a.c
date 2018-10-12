#include<stdio.h>
int factr(int);
int main ()
{
	int num,result;
	printf("ENTER A NUMBER\n\n");
 scanf("%d",&num);
 result=factr(num);

printf("FACTORIAL IS %d",result);
  return 0;
}
int factr (int x)
{

int fact;
fact=1;
while (x>0)
 

{
fact=fact*x;
x--;
}

return fact;
}

