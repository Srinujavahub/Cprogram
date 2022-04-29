//230. Write a C program to sort array elements in ascending order.
#include<stdio.h>
void main()
{
	int A[10], i,j,temp;
	printf("Enter the elements into an array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("Elements in A the Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }
        printf("\n");
	for(i = 0;i < 10;i++)
	{
		for(j = i+1;j < 10;j++)
		{
                      if(A[i] > A[j])
		      {
			      temp = A[i];
			      A[i] = A[j];
			      A[j] = temp;
		      }
		}
	}
	printf("Elements in the Array after Sorting\n");	
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
