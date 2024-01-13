#include<stdio.h>
#define max_size   7
int max(int a [],int number);
int min(int a [],int number);
void sum(int a[] , int size);

void main ()
{ 
int x[max_size]={4,6,88,99,-1};
int res_max,res_min;

res_max= max(x,max_size);
res_min= min(x,max_size);
printf("The max size of array[%d] is %d\n\n",max_size,res_max);
printf("The min size of array[%d] is %d\n\n",max_size,res_min);
sum(x,max_size);	
}
int max(int a[],int number)
{
	int m ;
	 m=a[0];
 for (int i =0 ; i<number; i++)	
 {
	
	 if ( a[i] > m )
	   m=a[i];
 }
 return (m);
}
int min(int a[],int number)
{
	int n  ;
	n=a[0];
 for (int i =0 ; i<number ; i++)
 {
    if(a[i]<n)
		n=a[i];
 }	
 return (n) ; 
}
