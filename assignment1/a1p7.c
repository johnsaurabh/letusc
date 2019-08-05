#include<stdio.h>
#include<stdlib.h>
int main()
{ FILE *fp1;
int *arr;
int i;
fp1=fopen("in2.txt","r");
	arr=(int *) malloc(40 * sizeof(int));
	printf("%d is the size\n\n",sizeof(arr));
	if(arr==NULL)
	printf("mallocation faile\n");
	for(i=0;i<10; i++)
	{
	fscanf(fp1,"%d",(arr+i));
		printf("%d\n",*(arr+i));
	}
	fclose(fp1);
	return 0;
	}
