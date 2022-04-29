//Find the given string is Anagram or not
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str1[20],str2[20],i,j,temp;
        int size1,size2, flag = 0;
	printf("Enter the string 1\n");
	scanf("%s",str1);
	printf("Enter the string 2\n");
	scanf("%s",str2);
	size1 = strlen(str1);
	size2 = strlen(str2);
	if(size1 != size2)
	{
		printf("Strings are not an Angram\n");
		exit(1);
	}
        for(i = 0;i < size1;i++)
	{
		if((str1[i] >= 'A') && (str1[i] <= 'Z'))
		{
		   str1[i] = str1[i] + 32;
		}
	}
	for(i = 0;i < size2;i++)
        {
                if((str2[i] >= 'A') && (str2[i] <= 'Z'))
                {
                   str2[i] = str2[i] + 32;
                }
        }
	for(i = 0;i < size1-1;i++)
	{
		for(j = i+1;j < size1;j++)
		{
			if(str1[i] > str1[j])
			{
				temp = str1[i];
				str1[i] = str1[j];
				str1[j] = temp;
			}
		}
	}
        for(i = 0;i < size2-1;i++)
        {
                for(j = i+1;j < size2;j++)
                {
                        if(str2[i] > str2[j])
                        {
                                temp = str2[i];
                                str2[i] = str2[j];
                                str2[j] = temp;
                        }
                }
        }
	for(i = 0;i < size1;i++)
	{
		if(str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("Given Strings are anagram\n");
                puts(str1);
	        puts(str2);
	}
	else 
	{
		printf("Given string are not a anagram\n");
	}
}
