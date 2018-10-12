#include<stdio.h>
int main()
{
	int hrs=40,workers,otp,otp_hrs;
	workers=1;
	while (workers<11)
{
		printf("enter the no of hrs\n");
		scanf("%d",&hrs);
		if (hrs>40){
		otp_hrs= hrs-40;
		otp=otp_hrs*12;
		printf("the overtime pay of the worker is %d\n",otp);
	}
	else 
	printf("There is no over time pay");
		workers++;
}	
		return 0;
		
}
