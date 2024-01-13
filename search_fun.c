#include<stdio.h>
#define MAXSIZE  100
void input(int a[], int size);
void linear_search(int a[],int size , int num_search);
void biniary_search(int a[],int size,int num_search);
void main()
{
	int arr[MAXSIZE],n, num_s;
	printf("Enter the size of array (<100):");
	scanf("%d",&n);
	input(arr,n);
	printf("\n Enter the value to cheeck:");
	scanf("%d",&num_s);
	
	printf("\n*****************linear_search***************\n");
	linear_search(arr,n,num_s);
	printf("\n*****************binary_search***************\n");
	biniary_search(arr,n,num_s);
	
}
void input(int a[], int size)
{
	int i;
	for(i=0 ;i<size; i++)
	{
		printf("value[%d]:",i);
		scanf("%d",&a[i]);
	}
}

void linear_search(int a[],int size , int num_search)
{
	int i , pos=-1;
	for(i=0 ;i<size; i++)
	{
		if(num_search==a[i])
		{
			pos=i;
		    break;
		}
	}
	if(pos==-1)
		printf("%d : The value not found\n",num_search);
	else
        printf("The value of search is :%d in :(%d)\n",num_search,pos);
			
	}
	
void biniary_search(int a[],int size,int num_search)
{
	int lower , upper, mid ,pos;
	lower=0;
	upper=size-1;
     pos =-2;
	while(upper>lower)
	{
		mid=(lower+upper)/2;
		if(num_search==a[mid])
		{
			pos=mid;
			break;
		}
		else if(num_search>a[mid])
			lower=mid+1;
		else 
			upper=mid-1;
			
	}
	    if(pos==-2)
		printf("%d : The value not found\n",num_search);
	    else
        printf("The value of search is :%d in :(%d)\n",num_search,pos);
		  
}
