#include<math.h>
#include<stdio.h>
int main()
{
	float x,a,b,c,d,e,f;
	printf("Enter any angle less than 360\n");
	scanf ("%f",&x);
	a= sin(x);
	b=cos(x);
	c=tan(x);
	d=1/tan(x);
	e=1/cos(x);
	f=1/sin(x);
	printf ("The trigonometrric ratios of the above angle are \n");
	printf("sine=%f\n cosine =%f\n tangent=%f\n cotangent=%f\n secant=%f\n cosecant=%f",a,b,c,d,e,f);
	return 0;
}
