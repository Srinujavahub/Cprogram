
//Write a C program to count the occurrences of character 'i' in below string input = "Delhi is capital city of india".
#include<stdio.h>

void main()
{
	char str[50] = "Delhi is capital city of india",count = 0;
	
	for(int i = 0;str[i] != '\0';i++)
	{
		if(str[i] == 'i')
		{
			count++;
		}
	}
	printf("Occurance of i in a given string is %d\n",count);

}
