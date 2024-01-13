#include<stdio.h>
#define max_size  50
void input(int a[],int size);
void output(int a[],int size);
void insert (int a[], int size , int position,int new_value);
void delet (int a[], int size , int position);
void main()
{
	int arr[max_size], n , pos , new,res_input;
	printf("Enter the size of array<50: ");
	scanf("%d",&n);
	input(arr,n);
	printf("the output of array ***befor***changed\n");
	output(arr,n);
    printf("\n***********department **/(insert)/*******\n");
	printf("Enter the position to insert : ");
	scanf("%d",&pos);
	printf("\nEnter the  new value:");
	scanf("%d",&new);
    insert(arr,n,pos,new);
    printf("\n***********department **/(delet) /*******\n");	
	printf("Enter the position to delet : ");
	scanf("%d",&pos);
	delet(arr,n,pos);
	
}
void input(int a[],int size)
{
	
	for(int i=0 ;i<size; i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
}

void output(int a[],int size)
{
	for (int i=0 ;i<size; i++)
	{
		printf("arr[%d]:%d\n",i,a[i]);
	}
}
void insert (int a[], int size , int position,int new_value)
{
	for(int i =size ; i>=position ;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=new_value;
	size++;
	for (int i=0 ;i<size; i++)
	{
		printf("arr[%d]:%d\n",i,a[i]);
	}
}
void delet (int a[], int size , int position)
{
	for(int i=position; i<size ;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	for (int i=0 ;i<size+1; i++)
	{
		printf("arr[%d]:%d\n",i,a[i]);
	}
	
}	