#include<stdio.h>
int main()
{float tempFH, tempCS;
printf("Enter temperature in farheinheat") ;
scanf("%f",&tempFH);
tempCS = (tempFH-32)*5/9;
printf ("Temperature in centigrades is %f ",tempCS);
return 0;

}
