#include<stdio.h>
int main()
{

int km; int mt; float ft; float inch;
printf("Enter distance in kilometers:");
scanf("%d", &km);
mt =1000*km;
ft= 0.3 * mt;
inch=39.37 * mt;
printf("\nDistance between the  cities in metres is %dmtrs, in feet it is %fft and in inches its %finhes",mt,ft,inch);

return 0;
}

