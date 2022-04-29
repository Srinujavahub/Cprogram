#include<stdio.h>

void main()
{
	unsigned int a = 0x89267190;

        unsigned char *ch = (char*)&a;
        printf("%x\n",*ch);
	if(*ch == 0x90)
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
}

