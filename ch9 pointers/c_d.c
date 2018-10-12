#include<stdio.h>
#include<math.h>

void aot(float a, float b,float c,float *s ,float *) ; /*area of triangle*/
int main(){

float a,b,c,sp,area;
printf("Enter the sides of the triangle,\n\n");
scanf("%d %d %d",&a,&b,&c);
printf("The area of the triangle is\n  ");
aot( a,b,  c, &sp,&area);
}
void aot(float a, float b, float c,float *s,float *aotri){
*s=a+b+c/2;
*aotri=pow (1/2, *s*(*s-a)*(*s-b)*(*s-c)  );
printf ("%f",*aotri);
}
