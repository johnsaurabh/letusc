#include<stdio.h>
int main()
{
	int sp,cp,gain,loss;
	printf("Ener  first cost price and then selling price\n");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
	
	gain=sp-cp;

	 printf("The gain is %d",gain);
}
 else
{
  
 loss= cp-sp;
	
	
	 printf("The loss is %d",loss);
}
return 0;
	 
	 }
	 
