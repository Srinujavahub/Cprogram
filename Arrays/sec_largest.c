//216.Write a C program to find second largest element in an array.

#include<stdio.h>

void main()
{
        int A[10], i, j, temp, largest2;


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

	largest2 = A[9-1];
	printf("Second largest element in array is : %d\n",largest2);
}

