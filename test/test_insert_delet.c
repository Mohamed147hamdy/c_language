#include<stdio.h>
#define max_size  10
void main()
{
	int arr[max_size]={1,2,3,4,5}, pos,i,n,new_num;
	printf("Enter the size<10:");
	scanf("%d",&n);
	printf("\nEnter the position:");
	scanf("%d",&pos);
	
	for(i=pos ;i<n; i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("\n *********after delet**********\n");
	for(i=0 ;i<n; i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	printf("\n");
	printf("\nEnter new number:");
	scanf("%d",&new_num);
	printf("\nEnter the position:");
	scanf("%d",&pos);
	for (i=n ;i>=pos; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]= new_num;
	n++;
	printf("\n *********after insert**********\n");

	for(i=0 ;i<n; i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	
	
}