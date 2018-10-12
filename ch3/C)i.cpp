#include<stdio.h>
int main()
{
	int lt,bt;
	printf("Enter lengh and breath of a recangle");
	scanf("%d%d",&lt,&bt);
	if(lt*bt>(lt+bt*2))
	printf("The area is greater than perimeter");
	else
	printf("Perimeter is greater than the area ofthe rectangle");
	return 0;
	}
