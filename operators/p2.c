/***********************************************************************************************
 WACP to check whether a given number is even or odd
***********************************************************************************************/
#include<stdio.h>

void main()
{
       int num;
       printf("Enter any number\n");
       scanf("%d",&num);

       if(num%2 == 0)
       {
	       printf("%d is a even number\n",num);
       }
       else
       {
	       printf("%d is a odd number\n",num);
       }

}
