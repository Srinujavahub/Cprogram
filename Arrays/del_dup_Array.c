//224.Write a C program to delete all duplicate elements from an array
#include<stdio.h>
void main()
{
        int A[10], i, j, k, size;

	printf("Enter the size\n");
	scanf("%d",&size);
     
        
        printf("Enter the elements into an array\n");
        for(i = 0;i < size;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("Elements in the Array are\n");
        for(i = 0;i < size;i++)
        {
                printf("%d\t",A[i]);
        }
        printf("\n");
	printf("Elements in the Array after deleting the duplicate elements are\n");
	for(i = 0;i < size;i++)
	{
		for(j = i+1;j < size;j++)
		{
			if(A[i] == A[j])
			{
				for(k = j;k < size-1;k++)
				{
					A[k] = A[k+1];
				}
				size--;
				j--;
			}	
	        }
	}
	for(i = 0;i < size;i++)
	{
	    printf("%d\t",A[i]);
	}
	printf("\n");
}
