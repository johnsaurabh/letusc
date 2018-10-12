#include <stdio.h>
int main()                                                              //
{
	char ch;
int nosf;
printf ("ENTER THE OPTION CORRESPONDING TO THE CLASS OF STUDENT");
printf("\n\n\na)first class\nb)second class\nc)third class\n");
scanf("%c",&ch);
switch (ch)
{
	case'a' : printf("ENTER TH NUMBER OF SUBJECTS FAILED\n\n");
	           scanf ("%d",&nosf);
	           if(nosf<=3)
	           printf("The grace mark is %d",nosf*5);
	           else printf ("He/She doesnt get any grace marks");
	           break;
	           
case 'b': printf ("ENTER TH NUMBER OF SUBJECTS FAILED\n\n")	;
           scanf ("%d",nosf);
           if (nosf<=2)
           printf("The grace mark of the student is %d",nosf*4);
           else  printf ("sorry you dont get any grace marks");
           break;
           case'c' : 
           
	 printf ("ENTER TH NUMBER OF SUBJECTS FAILED\n\n")	;
	
	 scanf ("%d",nosf);
           if (nosf<=1)
           printf("The grace mark of the student is %d",nosf*3);
            else printf ("There are no grace marks" );
          
		  break;
		  default: printf("YOU ARE FAILED!");  

}
return 0;

}

