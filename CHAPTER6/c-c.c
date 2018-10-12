#include<stdio.h>
void main()
{
int x,y;
 float div,fact=1,sum=0;
 
for (x=1;x<=6;x++)
{fact =1;
	for (y>0;y<=x;y--)
	{
	fact*=y;}
div= x/fact;

sum+= div ;
}
printf("%f",sum);	

getch();



}

