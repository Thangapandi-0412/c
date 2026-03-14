#include<stdio.h>
void complex(int,int,int,int);
void main()
{
   int a,b,c,d;
   printf("Enter real and imaginary part of c1");
   scanf("%d%d",&a,&b);
   printf("Enter real and imaginary part of c2");
   scanf("%d%d",&c,&d);
   complex(a,b,c,d);
}
   void complex(int e,int f,int g,int h)
   {
      int i,j;
      i=e+f;
      j=g+h;
      printf("The adding two complex %d+i%d",i,j);
   }
