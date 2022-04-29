/*****************************************************************************************************
65. Write a C program to calculate sum of digits of any number.
*****************************************************************************************************/
#include<stdio.h>

void main()
{
        int n,num,temp,sum = 0;
        printf("Enter any value\n");
        scanf("%d",&n);
        temp = n;

        while(n > 0)
        {
             num = n%10;
             sum = sum + num;
	     n = n/10;

        }
        printf("Sum of all the digits in %d are %d \n",temp,sum);
}

