#include<stdio.h>
int main()
{
  int x=5,y=1;
  printf("initial value of x=%d",x);
  printf("initial value of y=%d",y);
  y=++x;
  printf("after increment by 1,x=%d",x);
  printf("value of y=%d",y);
  y=--x;
  printf("after decrement by 1,x=%d",x);
  printf("value of y=%d",y);
  return 0;
}
