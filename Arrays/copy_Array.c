//219.Write a C program to copy all elements from an array to another array.

#include<stdio.h>
void main()
{
        int A[10],B[10], i;


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

	for(i = 0; i < 10;i++)
	{
		B[i] = A[i];

	}
	printf("Copied elements in the B array from the A array are \n");	    
	for(i = 0;i < 10;i++)
        {
                printf("%d\t",B[i]);
        }
	printf("\n");


}
