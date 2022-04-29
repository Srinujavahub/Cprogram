#include<stdio.h>

void main()
{
	int a = 0X12345678;
        int mask = 0X2000;
	a = a|mask;
	printf("%X",a);
}

