#include<stdio.h>
void circularshift(int *, int *, int * );
int main(){

int x=5,y=8,z=10;
printf("After shifting them circlularly ..the vales would look like..\n\n");
circularshift(&x,&y,&z);
return 0;
}
void circularshift(int *a ,int *b ,int *c ){
int t=*c;
*c=*b;
*b=*a;
*a=t;

printf("x=%d\ny=%d\nz=%d\n",*a,*b,*c);}
