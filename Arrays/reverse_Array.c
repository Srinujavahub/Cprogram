//227. Write a C program to find reverse of an array.
#include<stdio.h>
void main()
{
        int A[10],temp, i,j = 9;
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
	for(i = 0;i < 10/2;i++)
	{      
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
		j--;
	}
	printf("Elements in the Array After reversing\n");
        for(i = 0;i < 10;i++)
        {
		printf("%d\t",A[i]);
        }
        printf("\n");
}
