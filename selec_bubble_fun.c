#include<stdio.h>
#define MAXSIZE 200
void scan(int a[],int size);
void select_sort(int a[], int size);
void output(int a[], int size);
void bubble_sort(int a[], int size);

void main()
{
	int data[MAXSIZE],n;
	printf("Enter size array:");
	scanf("%d",&n);
	
	printf("\n******======selection sort ======******\n");
	scan(data,n);
	printf("\n*************before sort*************\n");
	output(data,n);
	select_sort(data,n);
	printf("\n*************After_sort(SELECT)*************\n");
	output(data,n);
	printf("\n******======BUBBLE SORT ======******\n");
	scan(data,n);
	printf("\n*************before sort(BUBBLE)*************\n");
	output(data,n);
	bubble_sort(data,n);
	printf("\n*************After_sort*************\n");
	output(data,n);
	
	

	
	
}
void scan(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
}
void select_sort(int a[], int size)
{
	int i , j , temp ;
	for(i=0 ; i<size-1; i++)
	{
		for(j=i+1 ; j<size ; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
}

void output(int a[], int size)
{
	printf("the array is :{");
	for(int i=0;i<size;i++)
	{
		printf(",%d",a[i]);
	}
	printf("}\n");
}

void bubble_sort(int a[], int size)
{
	int i,temp,sorted;
	do{
		sorted=1;
	for(i=0 ;i<size-1;i++)
	{
		if (a[i]>a[i+1])
		{
			temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			sorted = 0;
		}
	}
}while(!sorted);
}
