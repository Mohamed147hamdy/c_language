#include<stdio.h>
#define max_size   10
int scan(int a[],int size);
void output(int a[], int size);
void main()
{
	int arr[max_size],s;
    s=scan(arr,max_size);
    output(arr,max_size);	
	
}
int scan(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
}
void output(int a[], int size)
{
	printf("the array is :{");
	for(int i=0;i<size;i++)
	{
		printf(",%d",a[i]);
	}
	printf("}\n\n");
	for(i=0 ;i<size; i++)
	{
		printf("data[%d]:%d\n",i,data[i]);
	}
}
