#include<stdio.h>

void main()
{
	int num, prime_sum = 0, count, i, j;

	printf("Enter the number\n");
	scanf("%d",&num);
	for(i = 2;i < num;i++)
	{
		count = 0;
		for(j = 1;j <= i/2;j++)
		{
			if(i%j == 0)
			{
				count++;

			}
		}
		if(count == 1)
		{
			prime_sum = prime_sum + i;
		}
	}
	printf("Sum of prime numbers is %d\n",prime_sum);
}
