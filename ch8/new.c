#include<stdio.h>
int prmfcts(int);
int main()
{
int x,all;
printf ("Enter a number.");
scanf("%d",&x);
 all=  prmfcts(  x );
printf("%d",all);
return 0;}

int prmfcts(int a)
{
	int i,j,num,isprime;
	for(i=2;i<=a;i++)
      {
      	if (a%i==0)
      	{
      		isprime=1;
      		for (j=2; j<=i/2; j++)
      		{
      			if(i%j==0)
      			isprime=0;
      			break;
      			
			  }
		if (isprime==1)	 
      
      	printf("%d,",i); }
	  }
	  
      return i;	

	
}




