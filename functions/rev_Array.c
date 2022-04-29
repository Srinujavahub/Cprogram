#include<stdio.h>
void rev(int,int []);

void main()
{
	int A[10],n = 10,i;

        printf("Enter the elements into an Array\n");
	for(i = 0;i < n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("elements in an array before the rev function call\n");
	for(i = 0;i < n;i++)
        {
                printf("%d\t",A[i]);
        }
	printf("\n");

	rev(n,A);//CALLING A REVERSE FUNCTION

        printf("elements in an array After the rev function call\n");
        for(i = 0;i < n;i++)
        {
                printf("%d\t",A[i]);
        }
        printf("\n");
}
void rev(int size,int A[])
{

	int i, j,temp;
	for(i = 0,j = size-1;i < size/2;i++,j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}

