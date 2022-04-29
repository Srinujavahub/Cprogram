/*
 12345
 678910
 1112131415
 1617181920
 2122232425
*/

void main()
{
	int i, j, k = 1;

	//printf("Enter the num1 and num2 values\n");
	//scanf("%d %d",&num1,&num2);

	for(i = 1;i <= 5;i++)
	{
		for(j = 0;j <= 5;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
}
