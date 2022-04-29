#include<stdio.h>
void main()
{
	int A[3][3][3], i, j, k;
        printf("Enter elements into 3-D Array\n");
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			for(k = 0;k < 3;k++)
			{
				scanf("%d",&A[i][j][k]);
			}
		}
	}
	for(i = 0;i < 3;i++)
        {
                for(j = 0;j < 3;j++)
                {
                        for(k = 0;k < 3;k++)
                        {
                                printf("A[%d][%d][%d] is %d at address of %p\t",i, j, k, A[i][j][k],&A[i][j][k]);
                        }
			printf("\n");
                }
        }
}
