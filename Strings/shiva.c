#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if( (a == b) && (b == c))
	{
		printf("three values are same \n");
	}
	else if((a>b) && ( a > c))
	{
		printf("%d is bigger \n",a);
	}
	else if((b > c))
	{
		printf("%d is bigger \n",b);
	}
	else
	{
		printf("%d is bigger \n",c);
	}
}
