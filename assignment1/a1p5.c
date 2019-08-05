#include<stdio.h>
int main()
{ FILE *fp1;
fp1=fopen("in2.txt","w+");
int i,n;
for (i = 1; i<= 50; i++) {
    n = rand() % 1000 + 1;
		//scanf(" %d",&n);
	printf("%d\n",n);
	fprintf(fp1,"%d\n",n);}
	fclose(fp1);
	return 0;
	}
