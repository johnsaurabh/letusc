#include<stdio.h>
#include<math.h>
void distance(float, float, float, float, float, float,  float *,float *, float *);
void aot(float x1,float y1,float x2,float y2,float x3, float y3,float *areatri);                     /*YOU HSAVE TO WRITE TWO FNCTIONS TO CALCULATE AREA AND LENGTH OF SIDES...I DENOTED THE   
                                                                                                                  FUMCTION WITH AOT AND DISTANCE.....*/                                                                               
int main(){

float x1,y1,x2,y2,x3,y3,AB,BC,CA,area;
printf("Enter three sets of x and y values..they will be considered\n as x and y pairs respectively.\ns");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
distance(x1,y1,x2,y2,x3,y3,&AB,&BC,&CA);
return 0;
}
void distance(float x1,float y1,float x2,float y2,float x3, float y3,float *a,float *b,float *c)
{
float area;
*a=pow(   ( (y2-y1)*(y2-y1)+ (x2-x1)*(x2-x1) )  ,1/2  );
*b=pow(   (  (y3-y2)*(y3-y2)+(x3-x2)*(x3-x2)  ),1/2  ) ;
*c=pow(((y3-y1)*(y3-y1)+ (x3-x1)*(x3-x1) ),1/2);
printf("The sides of the triangle are\n AB=%f\n BC=%f\n CA=%f\n",*a,*b,*c) ;
aot( x1, y1, x2, y2, x3,y3,&area) ;                                
}
void aot(float x1,float y1,float x2,float y2,float x3, float y3,float *areatri)
{
	*areatri=pow((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)),1/2);
	printf("Area of triangle is %f",*areatri);
	
	
	
}	
	
	
	
	
	
	
	

