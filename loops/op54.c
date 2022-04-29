/********************************************************************************************************
 54. Write a C program to print all even numbers between 1 to 100. - using while loop
********************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,i = 1;
	printf("Enter the N value\n");
	scanf("%d",&n);

	while(i <= n)
	{
		if(i%2 == 0)
		{
			printf("%d\n",i);
		}
	        i++;
	}
}
