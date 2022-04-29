//224.Write a C program to delete all duplicate elements from an array.

#include<stdio.h>
void main()
{
        int A[10], i, j, flag, count = 0;

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
	{       flag = 0;
		for(j = 0;j < 10;j++)
		{
			if(A[i] == A[j])
			{
				flag++;
				//A[i] = A[i+1];
			}	
			A[i] = A[i+1];
	        }
		if(flag >= 1)
		{
			printf("value %d frequency %d\n",A[i],flag);
		}
	}
}
