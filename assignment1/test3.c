include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	int i=0,num,loc,x=0;
	char ch;
    fp1= fopen ("in1.txt","r");
    fp2=fopen("out1.txt","w");
    if(fp1==NULL || fp2 == NULL){
    	printf("Couldnt open files\n");
	}
	else
		printf("Success\n");
	
	while (ch=fgetc(fp1)!=EOF)
	      if(ch=='\n')
	       printf("%d",ch);
  /*fseek(fp1,0,SEEK_END);
 
    loc=ftell(fp1);
    printf("%d location\n",loc);
    loc=loc-1;
    
    while(loc>=0)
    { 
    	fseek(fp1,loc,SEEK_END);
    	*/
    	return 0;
    }
