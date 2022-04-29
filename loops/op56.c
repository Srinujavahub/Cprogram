/*******************************************************************************************************************
 56. Write a C program to find sum of all natural numbers between 1 to n
******************************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,i,sum=0;
        printf("Enter the N value\n");
	scanf("%d",&n);

	i = n;
	for(i = 1;i <= n;i++)
	{
		sum = sum+i;

	}
	printf("Sum of all natural numbers :%d\n",sum);
}
