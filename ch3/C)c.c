#include<stdio.h>
int main()
{
	int yr;
	printf("Enter any year\n\n");
	scanf("%d",&yr);
	if(yr%4==0)
	printf ("Is a leap year!!!");
	else
	printf("Nothing special about it idiot!");
	return 0;
}
