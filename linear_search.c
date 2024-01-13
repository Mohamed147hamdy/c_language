#include<stdio.h>
void main()
{
	float arr[100];
	float key;
	int n,i,pos;
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
	for(i=0 ;i<n; i++)
	  if (arr[i]==key)
	  {
		pos=i;
        break;		
	  }
	  
	if(pos==-2)
		printf("The value is not found \n");
	else 
		printf("the value is found is (%.2f) in located (%d)",key,pos);
	  
		
	
	
}