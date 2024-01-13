#include<stdio.h>
int len_string(int a[]);
int plained(char a []);
void main()
{
	char name [25];
	printf("Enter your name :");
	gets(name);
	
	printf("the length of %s is %d\n",name,str_len(name));
    if (plain(name))
		printf("the name is  plained");
	else
		printf("the name is not plained");

	
}
int str_len(char a[])
{
	int i =0;
	while(a[i] != '\0')	i++;
    return i;
}
int plain(char a[])
{
	int i ;
	int pa =1;
	for(i=0; i<str_len(a)/2; i++)
	   if(a[i]!=a[str_len(a)-1-i])
	   {
		   pa=0;
		   break;
	   }
	   return pa;
}