/**********************************************************************************************
 58. Write a C program to find sum of all odd numbers between 1 to n.
**********************************************************************************************/


#include<stdio.h>

void main()
{
        int n,i,sum=0;
        printf("Enter the N value\n");
        scanf("%d",&n);

        for(i = 1;i <= n;i++)
        {
                if(i%2 != 0)
                {
                        sum = sum+i;
                }
        }
        printf("Sum of all even numbers : %d\n",sum);
}

