#include<stdio.h>
#include<string.h>
int main()
{
   int l,choice;
   char a[50],b[50];
   printf("enter the string");
   scanf("%s",a);
   printf("enter the choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 l=strlen(a);
	 printf("lenght of the string is %d",l);
	 break;
      case 2:
	 strcpy(b,a);
	 printf("original string is %d",a);
	 printf("copied string is %s",b);
	 break;
      case 3:
	 printf("enter the string");
	 scanf("%s",b);
	 strcat(a,b);
	 printf("the final string is %s",a);
	 break;
      case 4:
	 printf("enter the string");
	 scanf("%s",b);
	 if(strcmp (a,b)==0)
	    printf("string are equal");
	 else
	    printf("string are not equal");
	 break;
      default:
	 printf("enter invalid choice");
	 break;
   }
   return 0;
}
