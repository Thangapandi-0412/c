#include<stdio.h>
int main()
{
   int i;
   printf("Enter the i value");
   scanf("%d",&i);
   if(i>85 && i<=100)
      printf("A grade");
   else if(i>60 && i<=85)
      printf("B grade");
   else if(i>40 && i<=60)
      printf("C grade");
   else
      printf("fail");
}
