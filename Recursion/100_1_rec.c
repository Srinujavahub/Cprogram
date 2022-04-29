#include<stdio.h>

void display(int);

void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("%d\t",num);
	display(num);	

}

void display(int n)
{
	if(n == 0)
		return;
	n = n-1;
	printf("%d\t",n);
	display(n);
	

}
