#include<stdio.h>

void main()
{
	int num , divisor,count = 0,rem;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the divisor\n");
        scanf("%d",&divisor);

	while(num >= divisor)
	{
		num = num - divisor;
		count++;
	}
	rem = num;
	printf("remainder is %d\n",rem);
	printf("Quotient is %d\n",count);

}
