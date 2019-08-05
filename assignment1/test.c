#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	int i=0,num,loc,x=0;
	char ch;
    fp1= fopen ("in.txt","r");
    fp2=fopen("out.txt","w");
    if(fp1==NULL || fp2 == NULL){
    	printf("Couldnt open files\n");
	}
	else{
		printf("Success\n");
	}
	
	while((ch = fgetc(fp1)) != EOF){
	printf("%c", ch);
	if(ch=='\n'){
		printf("newline");
	}
//	if(ch=='\n'{
	
//	})	
	}
      
	
//    x = fseek(fp1,0,SEEK_END);
// 	if(!x){
// 		printf("fseek success\n");
//	 }
//    loc=ftell(fp1);
//    printf("%d location\n",loc);
//    loc=loc-1;
////    while(loc>=0)
////    {
////    	fseek(fp1,loc,SEEK_END);
////    //	fscanf(fp1,"%d",fp2);
////    	num=getw(fp1);
////    	putw(num,fp2);
////    	
////    loc--;	
////    	
////	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
