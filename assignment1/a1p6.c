#include<stdio.h>
int printarr();
int printind();
int calmax();
int calmin();
FILE *fp1;
int i=0,arr[10];
int main()
{
	int i=0,num,arr[10];
printarr();
printind();
//calmax();
//calmin();
	
	return 0;
}
int printarr()
{
	 if((fp1= fopen ("in1.txt","r"))==NULL)
 	printf("File couldnt be opened\n");
 	
 	else{
	while(i<10){
	fscanf(fp1,"%d",&arr[i]);
	printf("%d\n",arr[i]);
	i++;}
	fclose(fp1);}
	
return 0;	
	
}


int printind()
{
  int k;
fp1= fopen ("in1.txt","r");
	
	while(i<10)
	fscanf(fp1,"%d",&arr[i]);
	printf("Enter the index\n");
	scanf("%d",&k);
	//if(k>=0&&k<10)
	printf("%d\n",arr[k]);
	//else printf("INValid index\n");
	fclose(fp1);
	calmax(&arr[10]);
		return 0;
}
int calmax()
{ int i=0;
	int max=0;
	for(i=0; i<10; i++)
	  {
	  if(arr[max]<arr[i])
        max=i;	  }
	printf("%d is the maximum",arr[max]);
      calmin();
return 0;
}

int calmin()
{
	int min=0;
	for(i=0; i<9; i++)
	 {
	   if(arr[min]>arr[i])
        
		min=i;	  }
	printf("\n%d is the min",arr[min]);
	
 return 0;
 }



