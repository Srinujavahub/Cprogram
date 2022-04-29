//73. Write a C program to find power of any number using for loop.

#include<stdio.h>

void main()
{
	int i, base, exp, power=1;
	
	printf("Enter the base and Exponent\n");
	scanf("%d%d",&base,&exp);

	for(i = 0;i <= exp;i++)
	{
		power = power * base; 
	}	
	printf("%d rise to the power of %d is %d\n",base,exp,power);

}
