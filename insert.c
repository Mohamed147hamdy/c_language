#include<stdio.h>
#define max_size  20
void main()
{
	int arr[max_size],i,n,new_value,pos;
	printf("Enter the value of size <20 :");
	scanf("%d",&n);
	
	for (i=0 ;i<n; i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nbefore insert is:\n{");
	for (i=0 ;i<n; i++)
	{
		printf(",%d",arr[i]);
	}
	printf("}\n");
	
	for (i=0 ;i<n; i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}
   printf("Enter a position to insert new value:");
   scanf("%d",&pos);
   printf("\nEnter the new value:");
   scanf("%d",&new_value);
   /***algorithm insert***/
   for (int i=n ;i>=pos; i--)
   {
	   arr[i+1]=arr[i];
   }
   arr[pos]=new_value;
   n++;
   /*************/
   printf("--------------------------------");
   printf("\nAfter insert is:\n{");
	for (i=0 ;i<n; i++)
	{
		printf(",%d",arr[i]);
	}
	printf("}\n");
	
	for (i=0 ;i<n; i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	}