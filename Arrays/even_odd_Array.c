//217.Write a C program to count total number of even and odd elements in an array.

#include<stdio.h>
void main()
{
        int A[10], i, even_count = 0, odd_count = 0;


        printf("Enter the elements into an array\n");
        for(i = 0;i < 10;i++)
        {
                scanf("%d",&A[i]);
        }

        printf("Elements in the Array are\n");
        for(i = 0;i < 10;i++)
        {
                printf("%d\t",A[i]);
        }

        printf("\n");
        
	printf("Even elements in the array are\n");
	for(i = 0; i < 10;i++)
	{
		if(A[i]%2 == 0)
		{
			printf("%d\t",A[i]);
			even_count++;
			
		}
	}
	printf("\n");
	printf("Odd elements in the array are\n");
	for(i = 0; i < 10;i++)
	{
                if(A[i]%2 != 0)
                {
                        printf("%d\t",A[i]);
			odd_count++;
                }               
         
	 }
	printf("\n");
	printf("Number of event elements in the array is %d\n",even_count);
	printf("Number of odd elements in the array is %d\n",odd_count);

}
