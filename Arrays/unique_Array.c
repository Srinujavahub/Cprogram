//222.Write a C program to print all unique elements in the array.
#include<stdio.h>
void main()
{
        int A[10], i,j,flag;

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
	printf("Unique elements in the A array are\n");
	for(i = 0;i < 10;i++)
	{
		flag = 0;
		for(j = 0;j < 10;j++)
		{
			if(A[i] == A[j])
			{
				flag++;
	                }	
	        }
		if(flag == 1)
		{
			printf("%d\t",A[i]);
		}
	}
	printf("\n");
}
