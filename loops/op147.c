/*
1
12
123
1234
12345
*/

#include<stdio.h>

void main()
{
	int i,j;

	for(i = 1; i <= 5;i++)
	{
		for(j = 1;j <= 5;j++)
		{
			if(i >= j)
			{
				printf("%d",j);
			}

		}
		printf("\n");
	}
}
