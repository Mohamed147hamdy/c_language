#include<stdio.h>
void main()
{
	int i=0 ,day[555],n ,sum=0 ,max=-1,num;
	do
	{
		printf("day[%d] is ",i);
		scanf("%d",&day[i]);
		
	}while (day[i++]>0);
	
	n=i-1;
	printf("%d\n",n);
    num= sizeof(day)/sizeof(day[5]);
	printf("the number of element is %d\n",num);
	for ( i =0 ; i<n ; i++)
	{
		sum+=day[i];																												
		if (max<day[i])
			max=day[i];
	}
printf("the avrage of day[%d] is %.2f\n",i,(float)sum/n);
printf("the max temparture is : %d\n",max);
}