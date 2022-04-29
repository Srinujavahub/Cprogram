//66. Write a C program to calculate product of digits of any number.

#include<stdio.h>

void main()
{
        int n,num,temp,mul = 1;
        printf("Enter any value\n");
        scanf("%d",&n);
        temp = n;

        while(n > 0)
        {
             num = n%10;
             mul = mul * num;
             n = n/10;

        }
        printf("Reverse of %d is %d \n",temp,rev);
}

