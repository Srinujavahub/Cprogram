/***************************************************************************************************
 61. Write a C program to count number of digits in any number.
***************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,count=0;
	printf("Enter any value\n");
	scanf("%d",&n);

	if(n == 0)
	{
		printf("Number of digits : 1\n");
	}
	else
	{

	while(n != 0 )
	{
	      n = n/10;
	      count++;
	}
	printf("Number of digits : %d\n",count);
	}
	
}	
