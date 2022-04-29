#include<stdio.h>

void main()
{
	int num;
        printf("Enter the number\n");
	scanf("%d",&num);
	if((num & (num-1)) == 0)
	{
		printf("%d is a power of two\n",num);
	}
	else
	{
		printf("%d is not a power of two\n",num);
	}
}
