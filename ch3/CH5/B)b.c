#include <stdio.h>
int main()
{

int num,i=1;
unsigned long int fact=1;

printf ("Ente any number less than 34\n");
scanf("%d",&num);
while (i<=num)
  {
	
     fact =fact*i;
     i++;
	  printf("\n\n the factorial of %d is %d",num,fact);
  
    return 0;
   }
}

