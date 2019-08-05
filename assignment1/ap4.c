#include<stdio.h>
int main()
{ FILE *fp1,*fp2;
 char ch;
 int l,num,k;
	fp1=fopen("in1.txt","r");
	fp2=fopen("out1.txt","w");
   while (ch=fgetc(fp1)!=EOF)
 {
    if (ch=="\n")
   printf("NL\n");
   printf("%c\n",ch);} 
   fclose(fp1);
   fclose(fp2);
   return 0;
}
