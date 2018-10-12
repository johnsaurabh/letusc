#include <stdio.h>
int main()
{                                       /*though float is not allowed it inally becomes integer as it is equated to k*/
	int k;
   float j=2.0;
   switch (k=j+1)
   { case 3: printf("Trapped");
   break;
   default: printf("Caught");
  
   }
   return 0;
}
