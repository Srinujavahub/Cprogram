/*******************************************************************************************************
62. Write a C program to find first and last digit of any number.
*******************************************************************************************************/

#include<stdio.h>

void main()
{
	int n,i,first_digit,last_digit;
	printf("Enter any value\n");
	scanf("%d",&n);
        
	first_digit = n%10;
        
	while(n >= 10)
	{

	     n = n/10;
               
	}	
           last_digit = n;
	printf("First digit of a number is : %d\n",first_digit);
        printf("Last digit of a number is : %d\n",last_digit);
}
