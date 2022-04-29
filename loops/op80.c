//80. Write a C program to print all Prime numbers between 1 to n.

#include<stdio.h>

void main()
{
	int i, j,num, count = 0;
        
	printf("Enter the range\n");
	scanf("%d",&num);
	
	for(i = 1;i <= num;i++)

	{
		count = 0;
		for(j = 1;j <= i;j++)
		{
			if(i%j == 0)
			{
				count++;
			}

		}
		if(count == 2)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}

