//74. Write a C program to enter any number and print all factors of the number.

#include<stdio.h>

void main()
{
	int num,i;
	printf("Enter the value of num\n");
	scanf("%d",&num);

	printf("factors of %d are \n",num);

	for(i = 1;i <= num;i++)
	{
		if(num%i == 0)
		{
			printf("%d\t",i);
		}
	}
}
