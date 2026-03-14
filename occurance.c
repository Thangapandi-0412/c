#include<stdio.h>
main()
{
  int count=0,a[15],i,j,n,ch,key,flag;
  printf("\n Enter the no of elements in array");
  scanf("%d",&n);
  printf("\n Enter the element of the array");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("\n enter your choice");
     scanf("%d",&ch);
     switch(ch)
     {
	case 1:
        printf("enter the elements to count");
	scanf("%d",&j);
	for(i=0;i<n;i++)
        {
	  if(j==a[i])
		count++;
		}
	      	printf("the no of occurance in array is %d",count);
                break;
	case 2:
		printf("enter the key value be searched");
		scanf("%d",&key);
                for(i=0;i<n;i++)
		{
		  if(a[i]==key)
		  {
		   printf("the position of the elements in the array is %d",i);
		   flag=1;
		   break;
		   }
	        }
		   if(flag==1)
		   printf("\n elementis not found");
		   break;
	    default:
		   printf("\n invaild choice");
		   break;
	  }
     }
