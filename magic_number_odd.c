#include<stdio.h>
void main()
{
	int r,c,val ;
	int n;
	printf("please size of magic:");
	scanf("%d",&n);
	int magic[n+1][n+1];
	r=1;
	c=(n+1)/2;
	val=1;
	do
	{
		magic[r][c]=val;
		if(val%n==0)
			r++;
		else{
			c--;
			r--;
		}
		
		if(r==0)  r=n;
		if(c==0)  c=n;
		val++;
	}while(val<=n*n);
	
	
	for(r=1 ;r<=n; r++)
	{
		for(c=1 ;c<=n; c++)
			printf("%4d",magic[r][c]);
		
		printf("\n");
}
}