//11. Practice a program on count the number of conscuative even number of one's
#include<stdio.h>
void displayBits(int num)
{
        int mask,i;

        for(i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                putchar((num&mask) ? '1' : '0');
                if(i%4 == 0)
                {
                        printf(" ");
                }
        }
        printf("\n");
}

void main()
{
	int num,count = 0,even_count = 0;
	printf("Enter the number\n");
	scanf("%x",&num);
	displayBits(num);
        
	for(int i = 0;i <= 31;i++)
	{
		if(num&(1<<i))
		{
                      count++;
		}
		else 
		{
			if(count%2 == 0 && count != 0)
			{
                              even_count++;
			}
			count = 0;
		}
	}
	printf("Even count %d\n",even_count);
}
