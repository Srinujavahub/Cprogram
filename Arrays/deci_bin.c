#include<stdio.h>

void main()
{
	int arr[16], i, j, num;

	printf("Enter the decimal number\n");
	scanf("%d",&num);

	for(i = 0; num != 0;i++)
	{
		arr[i] = num % 2;
		num = num/2;
	}

	printf("Binary number is\n");
	for(j = i-1;j >= 0;j--)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
}
