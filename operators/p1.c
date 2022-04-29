/*************************************************************************************
 WACP to accept two numbers whether they are equal or not
*************************************************************************************/
#include<stdio.h>

void main()
{
	int num1,num2;
	printf("Enter any two values\n");
	scanf("%d%d",&num1,&num2);
	if(num1 == num2)
	{
		printf("%d is equals to %d\n",num1,num2);
	}
	else
	{
		printf("%d is not equals to %d\n",num1,num2);
	}


}
