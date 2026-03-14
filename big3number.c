#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter 3 numbers");
   scanf("%d%d%d",&a,&b,&c);
   if((a>b)&&(a>c))
       printf("a is biggest");
   else if(b>c)
      printf("b is biggest");
   else
      printf("c is biggest");
}
