//75. Write a C program to enter any number and calculate its factorial.

#include<stdio.h>

void main()
{
      int i,fact,num;
      printf("Enter any value\n");
      scanf("%d",&fact);
      num = fact;

      for(i = 1;i < num;i++)
      {
	      fact = fact * i;
      }
      printf("factorial of %d is %d\n",num,fact);
}
