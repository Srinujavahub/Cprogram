//221.Write a C program to delete an element from an array at specified position.

#include<stdio.h>
void main()
{
        int A[10], i, pos, value;

	printf("Enter the elements into an array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }

        printf("Elements in the A Array Before deletion of the element are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }

        printf("\n");
	printf("Enter the position to be deleted\n");
        scanf("%d",&pos);

	for(i = pos-1;i < 10-1;i++)
        {
		A[i] = A[i+1];
                
        }
	 printf("Elements in the A Array After deletion of the element are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }

	printf("\n");

}

