#include<stdio.h>
void main()
{
	int value[4][2];
	int r, c ;
	for(r=0 ; r<4 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			printf("value[%d][%d]:",r,c);
			scanf("%d",&value[r][c]);
		}
	}
	
	for(r=0 ; r<4 ; r++)
	{
		for(c=0 ; c<2 ; c++)
		{
			printf("%4d",value[r][c]);
			
		}
		printf("\n");
	}
	
	
}