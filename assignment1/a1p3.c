#include<stdio.h>
int main()
{
	FILE *fp1;
	int i=0,num,arr[10];
 if((fp1= fopen ("in1.txt","r"))==NULL)
 	printf("File couldnt be opened\n");
 	
 	else{
	while(i<10){
	fscanf(fp1,"%d",&arr[i]);
	printf("%d\n",arr[i]);
	i++;}
	fclose(fp1);
	//for(i=0;i<10;i++)
//	printf("%d\n",arr[i]);
	 }
	 //printf("%d",fp1);
	return 0;
}
