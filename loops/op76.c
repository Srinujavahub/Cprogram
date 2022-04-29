//76. Write a C program to find HCF (GCD) of two numbers.

#include<stdio.h>

void main()
{
	int i, num1, num2, gcd_num;
        
	printf("Enter the num1 and num2 values\n");
	scanf("%d%d",&num1,&num2);

	for(i = 1;i <= num1 && i <= num2;i++)
	{
		if(num1%i == 0 && num2%i == 0)
		{
			gcd_num = i;
		}
	}
	printf("GCD of %d and %d are : %d\n",num1,num2,gcd_num);
}
