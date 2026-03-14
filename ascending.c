#include<stdio.h>
void main()
{
   int a[100],i,j,temp=0;
   printf("enter the elements");
   for(i=0;i<10;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
     for(j=0;j<10;j++)
     {
	if(a[i]<a[j])
	{
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	}
     }
   }
   for(i=0;i<10;i++)
   {
      printf("the sorted number are %d\n",a[i]);
   }
}

