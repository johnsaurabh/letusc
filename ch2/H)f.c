#include<math.h>
#include<stdio.h>
int main()
{
int v,t;
float wcf;
printf("Give he values of velocity and  temperature\n");
scanf("%d%d",&v,&t);
wcf= 35.74+0.6215*t+(0.4275*t-35.75)*pow((.16),v);
printf ("The wind chill factor is %f",wcf);
return 0;
}
