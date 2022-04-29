/******************************************************************************************************
52. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
******************************************************************************************************/

#include<stdio.h>

void main()
{
        int n,i;
        printf("Enter the n value :\n");
        scanf("%d",&n);
        i = n;
        while(i >= 1)
        {
                printf("%d\n",i);
                i--;
        }

}

