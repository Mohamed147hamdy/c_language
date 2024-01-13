#include<stdio.h>
void main()
{
	int arr[5];
	for (int i=0;i<5;i++)
	{
		printf("the value of number (%d) is :\n",i+1);
		scanf("%d",&arr[i]);

	}
	for(int j=0 ; j<5; j++)
	{
		printf("the value of arr[%d] is %d\n",j+1,arr[j]);
	}
	
}