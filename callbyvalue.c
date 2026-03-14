#include<stdio.h>
void swap(int,int);
int main()
{
   int a=10,b=20;
   printf("Before swapping the value in main a=%d,b=%d\n",a,b);
   swap(a,b);
   printf("After swapping the value in main a=%d,b=%d\n",a,b);
}
   void swap(int a,int b)
   {
      int temp;
      temp=a;
      a=b;
      b=temp;
      printf("After swaping value in function,a=%d,b=%d",a,b);
   }

