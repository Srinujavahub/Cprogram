//229. Write a C program to search an element in an array.
#include<stdio.h>
void main()
{
        int A[10], i, key, flag = 0;
        printf("Enter the elements into an array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("Elements in A the Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }
        printf("\n");
	printf("Enter the element to be found\n");
	scanf("%d",&key);
	for(i = 0;i < 10;i++)
	{
		if(A[i] == key)
		{
			flag++;
			printf("key %d is found at A[%d]\n",key,i);
			break;
		}
	}
	if(flag == 0)
	{
		printf("key %d is not found\n",key);
	}
}
