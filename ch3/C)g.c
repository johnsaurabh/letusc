#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b+c==180)
	printf("You got a triangle.");
	else
	printf("You entered nonsense");
	return 0;
}
