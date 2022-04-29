#include<stdio.h>

void main()
{
	int c,d;
	char string[] = "Cprogramming";
	char str[] = "Emware";

	for(c = 0;c <= 11;c++)
	{
		d = c + 1;
		printf("|%-12.*s|\n",d,string);
	}

	for(c = 11;c >= 0;c--)
        {
                d = c + 1;
                printf("|%-12.*s|\n",d,string);
        }
	for(c = 0;c <= 10;c++)
	{
		d = c + 1;
		printf("|%-10.*s|\n",d,str);
	}
	printf("\n\n");
	printf("|%-10.*s|\n",d,str);
}
