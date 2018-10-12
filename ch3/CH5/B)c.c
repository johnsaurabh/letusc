#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,pw1,pw2;
	printf ("Enter any two numbers\n\n");
	scanf("%d%d",&x,&y);
	pw1= pow(x,y);
	printf ("the power of one number tothe other is %d",pw1);
	return 0;
}
