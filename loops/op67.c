//67. Write a C program to enter any number and print its reverse.

#include<stdio.h>

void main()
{
        int n,num,temp,rev=0;
        printf("Enter any value\n");
        scanf("%d",&n);
        temp = n;

        while(n > 0)
        {
             num = n%10;
             rev = (rev*10) + num;
             n = n/10;

        }
        printf("Sum of all the digits in %d are %d \n",temp,rev);
}

