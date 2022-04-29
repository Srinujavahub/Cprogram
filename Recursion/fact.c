#include<stdio.h>

long int fact(int);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num<0)
		printf("No factorial for negetive numbers\n");
	else
	{
		printf("Factorial fo num %d is %ld\n",num,fact(num));
	}
}

long int fact(int n)
{
	if(n == 0)
		return 1;
	else 
		return (n * fact(n-1));

}
