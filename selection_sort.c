#include<stdio.h>
void main()
{
	int data[]={33,5,66,55,4,33,45};
	int n ,i,j; 
	n=sizeof(data)/sizeof(data[0]);
	
	printf("\n**********before sort********\n");
	for(i=0 ;i<n; i++)
	{
		printf("data[%d]:%d\n",i , data[i]);
	}		
	
	for(i=0 ;i<n-1; i++)
	{
		for (j=i+1; j<n ; j++)
		{
			if(data[i]>data[j])
			{
			int temp;
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;
		}}
	}
	printf("\n**********after sort********\n");
	for(i=0 ;i<n; i++)
	{
		printf("data[%d]:%d\n",i , data[i]);
	}		
}