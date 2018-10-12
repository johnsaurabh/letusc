#include<stdio.h>
int main()
{

int fact=1,num,i;
char ch,another;
printf("ENTER A NUMBER\n\n\n");
scanf ("%d",&num);
printf("Type the required option name from the below menu\n\n a)Factorial of a number\n b)prime or not \n c)Odd or even \n");
         while (another=='y')
	   	printf("would  you like to continue y/n ?");
       		scanf ("%d",&another);

       scanf("%c",&ch);
       switch(ch)
       {
       	case 'a':
       		while (num>0)
       		{
			   fact=fact*num;
       		num--;}
       		printf("The factorial of %d is %d",num,fact);
       		break;
       	
	   case'b':
	   	    i==2;
	   	   while (i<=num-1)
	   	   {
			  if (num%i==0)
        printf("%d is not a prime number",num);	   
	   i++;}
	   break;
	   if (i==num)
	   printf("%d is a prime number");
	   break;
	   case'c':
	   	if (num%2==0)
	   	printf("%d is an eeven number",num);
	   	else printf ("Its an odd number");
	   	break;
	   	
	   
	   }
	 
	   
	   
	   return 0;
    
       	
	   }
			  
	  		   
			  
			  
		
			  
			  
			  
		   
		   
