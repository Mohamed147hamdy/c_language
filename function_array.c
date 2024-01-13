void output(int a[], int size)
{
	int i;
	printf("the array is :{");
	for(i=0;i<size;i++)
	{
		printf(",%d",a[i]);
	}
	printf("}\n\n");
	for(i=0 ;i<size; i++)
	{
		printf("data[%d]:%d\n",i,a[i]);
	}
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
void input(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
}
void insert (int a[], int size , int position,int new_value)
{
	for(int i =size ; i>=position ;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=new_value;
	size++;
	for (int i=0 ;i<size; i++)
	{
		printf("arr[%d]:%d\n",i,a[i]);
	}
}
void delet (int a[], int size , int position)
{
	for(int i=position; i<size ;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	for (int i=0 ;i<size+1; i++)
	{
		printf("arr[%d]:%d\n",i,a[i]);
	}
	
}	
void sum (int a[] , int size)
{
	int s =0;
	for(int i=0; i<size; i++)
	{
		s+=a[i];
	}
	printf("\nThe sum of array is : %d\n",s);
}

void avr(int a[] , int size)
{
	int s=0 ;
	float avr;
    for (int i =0 ; i<size; i++)
	{
		s+=a[i];
	}
   avr = (float)s/size;
printf("(%d/%d) is : %.2f\n",s,size,avr);   
}

void select_sort(int a[], int size)
{
	int i , j , temp ;
	for(i=0 ; i<size-1; i++)
	{
		for(j=i+1 ; j<size ; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
}

void bubble_sort(int a[], int size)
{
	int i,temp,sorted;
	do{
		sorted=1;
	for(i=0 ;i<size-1;i++)
	{
		if (a[i]>a[i+1])
		{
			temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			sorted = 0;
		}
	}
}while(!sorted);
}
void linear_search(int a[],int size , int num_search)
{
	int i , pos=-1;
	for(i=0 ;i<size; i++)
	{
		if(num_search==a[i])
		{
			pos=i;
		    break;
		}
	}
	if(pos==-1)
		printf("%d : The value not found\n",num_search);
	else
        printf("The value of search is :%d in :(%d)\n",num_search,pos);
			
	}
	
void biniary_search(int a[],int size,int num_search)
{
	int lower , upper, mid ,pos;
	lower=0;
	upper=size-1;
     pos =-2;
	while(upper>lower)
	{
		mid=(lower+upper)/2;
		if(num_search==a[mid])
		{
			pos=mid;
			break;
		}
		else if(num_search>a[mid])
			lower=mid+1;
		else 
			upper=mid-1;
			
	}
	    if(pos==-2)
		printf("%d : The value not found\n",num_search);
	    else
        printf("The value of search is :%d in :(%d)\n",num_search,pos);
		  
}