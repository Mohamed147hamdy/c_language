#include<stdio.h>
void main()
{
	int arr[3][5];
	for ( int i =0; i<5 ; i++ )
	{
		for(int j =0 ; j<3 ; j++)
		{
			printf("\n the value of number arr[%d][%d] is :",j,i);
			scanf("%d",&arr[j][i]);
		}
		printf("\t");
	}
	printf("\n the value of number arr[3][5] is ");
	for ( int k =0; k<5 ; k++ )
	{
		
		for(int q =0 ; q<3 ; q++)
		{
			
			printf("%d\n",arr[q][k]);
		}
		printf("\t");
	}
}