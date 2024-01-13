#include<stdio.h>
void main()
{
	char name[5];
	
	printf("please your name:");
	//scanf("%s",name);
	gets(name);
	printf("hellow,%s",name);
}