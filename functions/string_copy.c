#include<stdio.h>

void main()
{
	char str1[20] , str2[20] ,i;
	gets(str1);
        gets(str2);
	for(i = 0;str2[i] != '\0';i++)
	{
		str1[i] = str2[i];
	}
	puts(str1);
}

