#include<stdio.h>

void main()
{
	int A[3][3], i, j;

	printf("Enter the elements int matrix\n");

	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
		     scanf("%d",&A[i][j]);
			
		}
	}

	for(i = 0;i < 3;i++)
        {
                for(j = 0;j < 3;j++)
                {
                    printf("Address of %d is %p \n",A[i][j],&A[i][j]);

                }
        }

}
