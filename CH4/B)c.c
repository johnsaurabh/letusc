#include<stdio.h>
int main()
{
	int x=20,y=40,z=45;
	if(x>y&&y>z)
	printf("Biggest=%d",x);
	else if (y>x&&y>z)
	printf("Biggest = %d\n",y);
	else if(z>x&&z>y)
	printf("Biggest=%d\n",z);
	return 0;
}
