//214.Write a C program to find sum of all array elements.

#include<stdio.h>

void main()
{
	int A[10],i,sum = 0;
	
        printf("Enter the elements into an array\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Elements in the array\n");
	for(i = 0;i < 10;i++)
	{
                printf("%d\t",A[i]);
	}
	printf("\n");

	for(i = 0;i < 10;i++)
	{
	       sum = sum + A[i];
	}

	printf("Sum of elements in an Array is %d\n",sum);
	




}
