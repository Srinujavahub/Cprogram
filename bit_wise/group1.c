#include<stdio.h>
#include<string.h>
void main()
{
	int a, b;
	char s1[15] = {"hyderabad\0"};
	a=strlen(s1);
	printf("a=%d\n",a);
	b=strlen(s1+5);
	printf("b=%d\n",b);
}
