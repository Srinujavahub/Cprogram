#include<stdio.h>

void main()
{
	int A[3][3], i, j, flag = 0;

	 printf("Enter the elements into an Array\n");
	 for(i = 0;i < 3;i++)
	 {
		 for(j = 0;j < 3;j++)
		 {
			 scanf("%d",&A[i][j]);
		 }
	 }

	 for(i = 0;i < 3;i++)
         {
                 for(j = 0;j < 3;j++)
                 {
                        if(i == j && A[i][j] != 1)
			{
                             flag = -1;
			     break;
			}
			else if(i != j && A[i][j] !=0)
			{
				flag = -1;
				break;
			}
                 }       
         }
	 for(i = 0;i < 3;i++)
         {
                 for(j = 0;j < 3;j++)
                 {
                         printf("%d\t",A[i][j]);
                 }
		 printf("\n");
         }

	 if(flag == 0)
	 {
		 printf("Given matrix is a Identity\n");
	 }
	 else
	 {
		 printf("Given matrix is not a Identity\n");
	 }

}
