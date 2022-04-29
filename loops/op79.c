//79. Write a C program to check whether a number is Prime number or not.

#include<stdio.h>

void main()
{
	int num, count = 0, i;
        
	printf("Enter any number\n");
	scanf("%d",&num);

	for(i = 1;i <= num/2;i++)
	{
		if(num%i == 0)
		{
			count++;
		}
	}
	if(count == 1)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
}
