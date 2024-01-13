#include<stdio.h>
void main()
{
	float sum = 0 , temper[7], avr;
	for (int i=0 ; i<7 ; i++)
	{
		printf("day[%d] is : ",i+1);
		scanf("%f",&temper[i]);
		sum+=temper[i];
	}
	avr = sum / 7;
	printf("\nthe average of tempartue of week is :%.2f",avr);
}