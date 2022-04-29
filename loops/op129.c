/*
  129.
  10101
  01010
  10101
  01010
  10101

*/

#include<stdio.h>

void main()
{
	int i,j;
	
	for(i = 1;i <= 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			printf("%d",(i+j)%2);
		}
		printf("\n");
              
	}
}
