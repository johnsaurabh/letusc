#include<stdio.h>
void main()
{
      int i,j,n;  //Declaration of variables
      float fact=1,sum=0,div; //Declaration of variables
     
      for(i=1;i<=6;i++) //For Loop for calculating Sum
      {
            fact=1;
            for(j=1;j<=i;j++)
            {
                  fact*=j;    //Calculation of Factorial
            }
            div=i/fact;
            sum+=div;  
      }
      printf("\nSum of First Seven Terms : %f",sum);
      getch();
}
