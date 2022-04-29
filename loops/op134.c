/*134.
12345
12345
12345
12345
12345
*/

#include<stdio.h>

void main()
{
	int i, j, num1, num2;

	printf("Enter i and j values\n");
	scanf("%d %d",&num1,&num2);

	for(i = 1;i <= num1; i++)
	{
		for(j = 1;j <= num2;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
