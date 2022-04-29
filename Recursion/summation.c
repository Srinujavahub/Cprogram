#include<stdio.h>

long int summ(int);
void main()
{
	unsigned int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Summation of num %d is %ld\n",num,summ(num));

}

long int summ(int n)
{
	if(n==0)
		return 0;
    return(n + summ(n-1));

}
