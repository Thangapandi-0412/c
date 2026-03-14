#include<stdio.h>
void main()
{
   FILE*fptr;
   char name[20];
   int age;
   float salary;
   /*open for writing*/
   fptr=fopen("emp.rec","w");
   if(fptr==NULL)
   {
      printf("file does not exists \n");
      return;
   }
   printf("enter the name :\n");
   scanf("%s",name);
   fprintf(fptr,"name=%s\n",name);
   printf("enter the age :\n");
   scanf("%d",&age);
   fprintf(fptr,"age=%d\n",age);
   printf("enter the salary \n");
   scanf("%f",&salary);
   fprintf(fptr,"salary=%.2f\n",salary);
   fclose(fptr);
}

