#include<stdio.h>

void main()
{
	int i,j,row;

	printf("Enter the number of rows\n");
	scanf("%d",&row);

	for(i = 1; i <= 5 ; i++)
	{
		for(j = 5;j >= i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
