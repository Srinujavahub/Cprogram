//226.Write a C program to merge two array to third array.
#include<stdio.h>
void main()
{
	int A[10],B[10],C[20], i, j = 0;
        printf("Enter the elements into First array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("Elements in the First Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }
        printf("\n");
	printf("Enter the elements into Second array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&B[i]);
        }
        printf("Elements in the Second Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",B[i]);
        }
        printf("\n");
	for(i = 0;i < 10;i++)
	{
		C[i] = A[i];
	}
	for(i = 10;i < 20;i++)
	{
		C[i] = B[j];
		j++;
	}
	printf("Elements in the Third Array are\n");
        for(i = 0;i < 20;i++)
        {
                printf("%d\t",C[i]);
        }
        printf("\n");
}
