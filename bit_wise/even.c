#include<stdio.h>

void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	if((num & 0x01) != 1)
	{
		printf("Given number is even number\n");
	}
	else
	{
		printf("given number is a Odd number\n");
	}
}
