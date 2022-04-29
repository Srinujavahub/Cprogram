/*
// Logic-1 By using Single String
#include<stdio.h>
#include<string.h>
void main()
{
        char str[10] = "hahahah",flag = 0,i,length;

        length = strlen(str)-1;

        for(i = 0;i <= length/2;i++)
        {
                if(str[i] != str[length-i])
                {
                        flag = 1;
                        break;
                }
        }
        if(flag == 0)
        {
                printf("Given String is a palindrome\n");
        }
        else
        {
                printf("Given String is not a palindrome\n");
        }

}
*/
//Logic-2 By cheking the String after reversing 

#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],temp[10], i,flag = 0,length;
	gets(str);

	length = strlen(str);
//	for(i = 0;i < length;i++)
// 	{
//		if(str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = str[i]+32;
//		}
//	}

	for(i = 0;i <= length;i++)
	{
		temp[i] = str[length-i-1];
	}
        temp[length] ='\0';
        puts(temp);
	for(i = 0;i < length;i++)
	{
		if(str[i] != temp[i])
		{
		     flag = 1;
		     break;
		}
	}
	if(flag == 0)
	{
	      printf("%s is a palindrome\n",str);
	}
	else
	{
	      printf("%s is not a palindrome\n",str);
	}
}



