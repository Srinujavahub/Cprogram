#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],temp[10], i,flag = 0,length;
	gets(str);

	length = strlen(str);
	
	for(i = 0;i <= length;i++)
	{
		temp[i] = str[length-i-1];
		
	}
        temp[length] ='\0';        
        puts(temp);

}
