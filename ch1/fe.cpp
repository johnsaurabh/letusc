#include<stdio.h>
int main()
{int lth, bth, radius,ptm, area; 
scanf("%d %d",&lth ,&bth);
printf("%d %d",lth,bth);
ptm= (lth+bth)*2;
area= lth*bth;
printf("The perimeter of the recangle is %d and its area is %d",ptm,area);
return 0;
}
