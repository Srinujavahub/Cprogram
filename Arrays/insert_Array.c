//220.Write a C program to insert an element in an array.
#include<stdio.h>
void main()
{
        int A[10], i, pos, value;


        printf("Enter the elements into an array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }

        printf("Elements in the A Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }

        printf("\n");
	printf("Enter the index\n");
        scanf("%d",&pos);

	printf("Enter the value to be inserted at index\n");
	scanf("%d",&value);

	A[pos] = value;

	printf("value at that position after insertion\n");
	printf("A[%d] = %d\n",pos, A[pos]);	

	printf("Elements in A Array after insertion of element are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }
	printf("\n");

}

