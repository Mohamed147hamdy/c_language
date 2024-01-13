#include<stdio.h>
#define max_size  20
void main()
{
	
	int arr[max_size]={4,5,6,7,8},n,pos,new_value;
	printf("Enter the size<20:");
	scanf("%d",&n);
	printf("Enter the position to insert value:");
	scanf("%d",&pos);
	printf("Enter the new value:");
	scanf("%d",&new_value);
	for(int i=n ;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=new_value;
	n++;   //leeeh
	for(int i=0 ;i<n; i++)
	{
		printf("arr[%d] : %d\n",i,arr[i]);
	}
	
}