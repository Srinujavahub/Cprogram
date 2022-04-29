#include<stdio.h>

void main()
{
        int i,j,row,col;

        printf("Enter the number of rows\n");
        scanf("%d%d",&row,&col);

        for(i = 1; i <= row; i++)
        {
                for(j = col;j >= i;j--)
                {
                        printf("* ");
                }
                printf("\n");
        }
}

