/*******************************************************************************************************************
 64. Write a C program to swap first and last digits of any number.
*******************************************************************************************************************/
#include<stdio.h>

void main()
{
        int n,i,first_digit,last_digit,sum;
        printf("Enter any value\n");
        scanf("%d",&n);

        last_digit = n%10;

        while(n >= 10)
        {

             n = n/10;

        }
        first_digit = n;
        sum = first_digit + last_digit;
        printf("First digit of a number is : %d\n",first_digit);
        printf("Last digit of a number is : %d\n",last_digit);
        printf("Sum of %d and %d is : %d\n",first_digit,last_digit,sum);
}


