#include<stdio.h>

void main()
{
	int a = 2,b = 1,c,d;
	c = a < b;
	d = (a > b) && (c < b);
	printf("c = %d\td = %d\n",c,d);

}
