#include<stdio.h>
#define max_size  7
#define Null 0
void sum (int a[] , int size);
void avr(int a[] , int size);
void out_put(int a[],int size);


void main()
{
	int arr[max_size]={1,2,55,7,9,0,5};
	out_put(arr,max_size);
	sum(arr,max_size);
	avr(arr,max_size);
	
}
void out_put(int a[],int size)
{
	printf("The array is :\n{");
	for(int i=0;i<size;i++)
	{
		
		printf(",%d",a[i]);
	}
	printf("}");
}

void sum (int a[] , int size)
{
	int s =0;
	for(int i=0; i<size; i++)
	{
		s+=a[i];
	}
	printf("\nThe sum of array is : %d\n",s);
}
void avr(int a[] , int size)
{
	int s=0 ;
	float avr;
    for (int i =0 ; i<size; i++)
	{
		s+=a[i];
	}
   avr = (float)s/size;
printf("(%d/%d) is : %.2f\n",s,size,avr);   
}
