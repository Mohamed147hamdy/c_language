#include<stdio.h>
#define max_size  10
void input_grade(int a[],int size);
void passed_failed(int a[],int size);
int highest(int a[], int size);
int lowest(int a[], int size);
void average(int a[], int size);

void main()
{
	
	int class[max_size];
	for(int i =1 ;i<=3; i++)
	{
	
	printf("\n/*********************class(%d)***************/\n",i);
	input_grade(class,max_size);
	passed_failed(class,max_size);
	printf("the highest degree in class (%d) is :%d\n",i,highest(class,max_size));
	printf("the lowest  degree in class (%d) is :%d\n",i,lowest(class,max_size));
    average(class,max_size);
	}
}
void input_grade(int a[],int size)
{
	for(int i=0 ; i<size; i++)
	{
		printf("student[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	printf("\n");
}

void passed_failed(int a[],int size)
{
	for(int i=0; i<size; i++)
	{
		if(a[i]>60)
			printf("\nstudent[%d]:(( passed ))\n",i);
        else
            printf("\nstudent[%d]:(( Failed ))\n",i);			
	}
}

int highest(int a[], int size)
{
	int highest=a[0];
	for(int i=0 ;i<size; i++)
	{
	  if(a[i]>highest)
          highest=a[i];
	}
	return highest;
}

int lowest(int a[], int size)
{
	int lowest=a[0];
	for(int i=0 ;i<size; i++)
	{
	  if(a[i]<lowest)
          lowest=a[i];
        
	}
	return lowest;
}

void average(int a[], int size)
{
	int sum=0;
	float average;
	for(int i = 0 ;i<size; i++)
	{
		if(a[i]>=50&&a[i]<=100)
		{
		    sum+=a[i];
		}
		else
			printf("\nthe degree is false\n");
	}
	average = (float)sum/size;
	printf("\n the average of degree is : %.2f",average);
}
