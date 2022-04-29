/*************************************************************************************************************
 59. Write a C program to print multiplication table of any number.
*************************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,i,mul=1;
	printf("Enter the N value\n");
	scanf("%d",&n);

	for(i = 1;i <= 10;i++)
        {
		mul = n * i;
		printf("%d * %d = %d\n",n,i,mul);
	}
}

