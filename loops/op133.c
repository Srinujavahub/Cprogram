/* 133.
 11111
22222
33333
44444
55555
 */

#include<stdio.h>

void main()
{
	int i, j, num1, num2;
        
	printf("Enter num1 and num2 values\n");
	scanf("%d %d",&num1,&num2);

	for(i = 1;i <= num1;i++)
	{
		for(j = 1;j <= num2;j++)
		{
			printf("%d",i);

		}
		printf("\n");
	}
}
