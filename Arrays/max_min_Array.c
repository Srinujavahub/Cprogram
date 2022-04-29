//215. Write a C program to find maximum and minimum element in an array.

#include<stdio.h>

void main()
{
	int A[10], i, small,large;


	printf("Enter the elements into an array\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Elements in the Array are\n");
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",A[i]);
	}
	small = large = A[0];
	
	printf("\n");
	for(i = 0;i < 10;i++)
	{
		
		if(A[i] < small)
		{
			small = A[i];
		}
		if(A[i] > large)
		{
			large = A[i];
		}
	}

	printf("Largest element :%d\nSmallest element :%d\n",large,small);

}
