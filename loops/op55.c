/*********************************************************************************************************
 55. Write a C program to print all odd number between 1 to 100.
*********************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,i=1;
	printf("Enter the N value\n");
	scanf("%d",&n);

	while(i <= n)
	{
		if(i%2 != 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
