#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("enter the coordinates (x1,y1),(x2,y2),(x3,y3) respectively\n\n\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if ((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2==0)
	printf("The points are collinear");
	else
	printf("They dont fall in the same line.");
	return 0;
	}
