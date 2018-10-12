#include<stdio.h>
void  statistics(int, int, int, int * ,int * );
int  main(){

int s1,s2,s3,sum , per;
printf("\n Enter the mrarks of three subjects\n\n");
scanf("%d%d%d",&s1,&s2,&s3);
statistics( s1,  s2, s3, &sum,&per);
return 0;}

void statistics(int a, int b, int c, int *addition, int *percent)
{
*addition=(a+b+c)/3;
*percent =((a+b+c)/300)*100;
printf("The average is %d and the percentage is %d",*addition,*percent);
}
