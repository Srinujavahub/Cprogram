//68. Write a C program to enter any number and check whether the number is palindrome or not.

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
	if(temp == rev)
	{
             printf("%d is a plindrome number\n",temp);
	}
	else
	{
             printf("%d is not a palindrome number\n",temp);
	}
}

