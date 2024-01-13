#include<stdio.h>
void main()
{
	float arr[100];
	float key;
	int n,i,pos;
	int lower,upper,mid;
	printf("Enter the size of array(<100):");
	scanf("%d",&n);
	
	for(i=0 ;i<n; i++)
	{
		printf("arr[%d]:",i);
		scanf("%f",&arr[i]);
	}
	printf("Enter the search value:");
	scanf("%f",&key);
	pos=-2;
	lower=0;
	upper=n-1;
	while(upper>=lower)
	{
		mid = (lower+upper)/2;
		if(key == arr[mid])
		{
			pos=mid;
			break;
		}
		else if( key > arr[mid] )
		{
			lower=mid+1;
		}
		else
		{
			upper=mid-1;
		}
		
	}
	
	if(pos==-2)
		printf(" %.2f : The value is not found \n",key);
	else 
		printf("the value is found is (%.2f) in located (%d)",key,pos);
	  
		
	
	
}