#include<stdio.h>
int main()
{
int mat,phy,chem,eng,french,sum;
printf ("Enter your marks in  the following order:\nMaths \nPhysics \nChemistry \nEnglish \nFrench. \n\n Hit Enter after each Entry.");

float per,avg;
scanf("%d %d %d %d %d",&mat,&phy,&chem,&eng,&french);

sum=mat+phy+chem+eng+french;
avg = sum/5;
per = (sum*100)/500;
printf ("Total marks is %d and average is %f and  is %f percentage.",sum,avg,per);

return 0;
}
