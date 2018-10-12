#include<stdio.h>
int digitcount(int a);
int main()
{int n,t,count;
scanf("%d",&n);
count=digitcount(n);
printf("%d",count);
return 0;
} 
int digitcount(int a){
 int b,sum=0, remainder;
 b=a;
if(b!=0)   
remainder= b%10;
sum=sum + remainder+ digitcount(b-b/10);


return (sum);
}
