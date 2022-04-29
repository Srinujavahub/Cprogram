//228. Write a C program to put even and odd elements of array in two separate array.
#include<stdio.h>
void main()
{
        int A[10], even[10], odd[10], i,j = 0,k = 0;
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
	for(i = 0; i < 10;i++)
	{
		if(A[i]%2 == 0)
		{
			even[j] = A[i];
			j++;
		}
		else
		{
			odd[k] = A[i];
			k++;
		}
	}
	printf("Even elements from an Array are\n");
        for(i = 0;i < j;i++)
        {
                printf("%d\t",even[i]);
        }
        printf("\n");
	printf("Odd elements from an Array are\n");
        for(i = 0;i < k;i++)
        {
                printf("%d\t",odd[i]);
        }
        printf("\n");
}
