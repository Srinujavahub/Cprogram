//213.Write a C program to print all negative elements in an array.

#include<stdio.h>

void main()
{
	int Arr[10],i,flag = 0;
	
	printf("Enter the elements into an Array\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&Arr[i]);
	}

	printf("Elements in the array are\n");
	for(i = 0;i < 10;i++)
	{
		printf("%d\t",Arr[i]);
	}
	printf("\n");

	for(i = 0;i < 10;i++)
	{
		if(Arr[i] < 0)
		{
			printf("%d\t",Arr[i]);
		}
		else
		{
                       flag++;			
		}
	}
	if(flag == 10)
	{
		printf("Negetive values are not present in the array\n");
	}
	
}
