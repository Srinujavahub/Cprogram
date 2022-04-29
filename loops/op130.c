/*
   130.
   11011
   11011
   00000
   11011
   11011
*/

#include<stdio.h>

void main()
{
	int i,j;
        
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			if(i == 2 && j == 2)
			{
				printf("%d",0);
			}
			else
			{
				printf("%d",1);
			}
		}
		printf("\n");

	}

}
