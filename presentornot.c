#include<stdio.h>
int main()
{
   int a[10],n,i,k,t=0;
   printf("Enter the total no of elements");
   scanf("%d",&n);
   printf("Enter the elements one by one");
   for(i=0;i<n;i++)
	 {
	 scanf("%d",&a[i]);
	 }
	 printf("Enter the element to be searcher");
	 scanf("%d",&k);
	 for (i=0;i<n;i++)
	 {
	 if(a[i]==k)
       	 {
	    t=1;
	    break;
	 }
	 }
	 if(t==1)
	    printf("Element is found");
	 else
	    printf("Element is not found");
	 return 0;
}
