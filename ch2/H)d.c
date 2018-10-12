#include<math.h>
#include<stdio.h>
int main()
{
	int x,y,r,p;
   printf("Enter cartesian values for x and y\n"); 
 scanf ("%d%d",&x,&y);
 	r= sqrt(x*x+y*y);
 	p=tan(y/x);
 	printf ("the polar coordinates of x and y are\n (%d,%d)",r,p);
 	return 0;
	
	
}
