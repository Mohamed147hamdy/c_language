#include<stdio.h>
#define true  1
#define false 0
void main()
{
	int data[]={22,4,77,9,7,1,22,34,55};
	int n,i,sorted; 
	n= sizeof(data)/sizeof(data[1]);
	printf("\n============= before sorting===========\n");
	for(i=0 ;i<n; i++)
	{
		printf("data[%d]:%d\n",i,data[i]);
	}
	
    do
	{
		sorted = true;
	   for(i=0 ;i<n-1; i++)
	   {
     	int temp;
		if (data[i]>data[i+1])
		{
			temp = data[i];
			data[i]=data[i+1];
			data[i+1]=temp;
			sorted=false;
		}
			
	}}	while(!sorted);
	printf("\n============= after sorting===========\n");
	for(i=0 ;i<n; i++)
	{
		printf("data[%d]:%d\n",i,data[i]);
	}
}