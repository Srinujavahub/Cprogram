#include<stdio.h>

int * fun();

void main()
{
	int *ptr;
	ptr = fun();

	printf("%d",*ptr);	
}
int* fun()
{
	int num = 10;
	int *ptr = &num;
	return ptr;
}
