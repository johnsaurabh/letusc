#include<stdio.h>
int main()
{
	FILE *fp1;
	int i=0,n;
    fp1= fopen ("in.txt","w+");
     
 for (i = 1; i<= 10; i++) {
    n = rand() % 1000 + 1;
		//scanf(" %d",&n);
	printf("%d\n",n);
	fprintf(fp1,"%d\n",n);
	
	
}
fclose(fp1);
return 0;
}
