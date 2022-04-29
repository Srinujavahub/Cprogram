/* 125.
   11111
   00000
   11111
   00000
   11111 

*/
#include<stdio.h>

void main()
{
	int i, j;
	for(i = 1;i <= 5;i++)
	{
		for(j = 1;j <= 5;j++)
		{
			if(i%2 == 0)
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
