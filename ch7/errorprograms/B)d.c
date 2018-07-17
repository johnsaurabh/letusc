#include <stdio.h>
int main()
{
	int a=3, b=4,c;
	c=b-a;
	switch (c)
	{
		case 1||2 : printf ("This wont be printed bcos");
		case a||b : printf("i alredy told you noting should follow case other than an alphabet or an integer");
		
		
	}
	return 0;
	
	}
