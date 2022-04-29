/*****************************************************************************************************
 8. Write a C program to find the largest of three numbers.   
*****************************************************************************************************/

#include<stdio.h>

void main()
{
        unsigned int a,b,c;
	printf("Enter the values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
        
	if(a == b && b==c)
	{
		printf("%d ,%d and %d are equal\n",a,b,c);
	}
	else if(a == b && c < a)
	{
		printf("a and b are equal\n");
	}
	else if(b == c && a > b)
	{
		printf("b and c are equal\n");
	}
	else if(a == c && b < a)
	{
		printf("a and c are equal\n");
	}
	else if(a>b && a>c)
	{
		printf("%d a is the biggest number\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%d  b is the biggest number\n",b);
	}
	else
	{
		printf("%d c is the biggest number\n",c);
	}
}
