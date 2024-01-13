#include<stdio.h>
void main()
{
	int value[4][5];
	int r, c ;
	for(r=0 ; r<4 ; r++)
	{
		 printf("Enter the value of row [%d]:",r);
		for(c=0 ; c<5 ; c++)
			scanf("%d",&value[r][c]);
		
	}
	for(r=0 ; r<4 ; r++)
	{
		for(c=0 ; c<5 ; c++)
		{
			printf("%4d",value[r][c]);
			
		}
		printf("\n");
	}
}