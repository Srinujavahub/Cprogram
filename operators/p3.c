/*******************************************************************************************************
  WACP to check whether the give number is positive or not
*******************************************************************************************************/

#include<stdio.h>

void main()
{
	int num;
	printf("Enter nay value\n");
	scanf("%d",&num);

	if(num>0)
	{
		printf("%d is a positive number\n",num);
	}
	else
	{
		printf("%d is a negetive number\n",num);
	}
}
