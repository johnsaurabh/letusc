#include<math.h>
#include<stdio.h>
int main()
{
	int L1,L2,G1,G2;
	 float d;
	 printf ("Enter the values of latitude and longitude reespectively ");
	 scanf("%d%d%d%d",&L1,&L2,&G1,&G2);
	d= 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
	printf("the distance is %f",d);
return 0;
}
